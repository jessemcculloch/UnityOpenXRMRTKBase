// Copyright (c) Microsoft Corporation.
// Licensed under the MIT License.

using Microsoft.MixedReality.OpenXR;
using System.Collections.Generic;
using System.Text;
using System.Threading.Tasks;
using UnityEngine;
using UnityEngine.Scripting;
using UnityEngine.XR.ARSubsystems;

namespace Microsoft.MixedReality.ARSubsystems
{
    [Preserve]
    public static class AnchorSubsystemExtensions
    {
        internal static Task<XRAnchorStore> anchorStoreLoadTask = null;
        public static Task<XRAnchorStore> LoadAnchorStoreAsync(this XRAnchorSubsystem anchorSubsystem)
        {
            if (!(anchorSubsystem is AnchorSubsystem))
            {
                Debug.LogWarning($"LoadAnchorStoreAsync: subsystem is not of type Microsoft.MixedReality.AnchorSubsystem. type: {anchorSubsystem.GetType()}");
                return Task.FromResult<XRAnchorStore>(null);
            }

            bool isExtensionEnabled = UnityEngine.XR.OpenXR.OpenXRRuntime.IsExtensionEnabled("XR_MSFT_perception_anchor_interop");
            if(!isExtensionEnabled)
            {
                Debug.LogWarning($"LoadAnchorStoreAsync: The anchor store is not supported; missing OpenXR extension XR_MSFT_perception_anchor_interop");
                return Task.FromResult<XRAnchorStore>(null);
            }

            if (anchorStoreLoadTask == null)
            {
                anchorStoreLoadTask = Task.Run(() =>
                {
                    var token = HoloLensFeaturePlugin.nativeLibToken;
                    if (token > 0)
                    {
                        NativeLib.LoadAnchorStore(token); // Blocking, potentially long call
                        return new XRAnchorStore(token);
                    }
                    return null;
                });
            }
            return anchorStoreLoadTask;
        }
    }

    public class XRAnchorStore
    {
        private readonly NativeLibToken nativeLibToken;
        private List<string> m_persistedAnchorNamesCache;
        private bool m_persistedAnchorNamesCacheDirty = true;
        private readonly object m_persistedAnchorNamesCacheLock = new object();

        internal XRAnchorStore(NativeLibToken token)
        {
            nativeLibToken = token;
        }

        public IReadOnlyList<string> PersistedAnchorNames
        {
            get
            {
                lock (m_persistedAnchorNamesCacheLock)
                {
                    if (m_persistedAnchorNamesCacheDirty)
                    {
                        UpdatePersistedAnchorNames();
                        m_persistedAnchorNamesCacheDirty = false;
                    }

                    return m_persistedAnchorNamesCache;
                }
            }
        }

        private void UpdatePersistedAnchorNames()
        {
            lock (m_persistedAnchorNamesCacheLock)
            {
                m_persistedAnchorNamesCache = new List<string>();
                uint numPersisted = NativeLib.GetNumPersistedAnchorNames(nativeLibToken);
                for (uint i = 0; i < numPersisted; i++)
                {
                    // A persisted anchor with a name > 255 chars does not appear
                    // to be supported by the anchor store winrt implementation.
                    StringBuilder stringBuilder = new StringBuilder(255);
                    NativeLib.GetPersistedAnchorName(nativeLibToken, i, stringBuilder, (uint)stringBuilder.Capacity);
                    m_persistedAnchorNamesCache.Add(stringBuilder.ToString());
                }
            }
        }

        public TrackableId LoadAnchor(string name)
        {
            return FeatureUtils.ToTrackableId(NativeLib.LoadPersistedAnchor(nativeLibToken, name));
        }

        public bool TryPersistAnchor(string name, TrackableId trackableId)
        {
            lock (m_persistedAnchorNamesCacheLock)
            {
                m_persistedAnchorNamesCacheDirty = true;
                return NativeLib.TryPersistAnchor(nativeLibToken, name, FeatureUtils.ToGuid(trackableId));
            }
        }

        public void UnpersistAnchor(string name)
        {
            lock (m_persistedAnchorNamesCacheLock)
            {
                m_persistedAnchorNamesCacheDirty = true;
                NativeLib.UnpersistAnchor(nativeLibToken, name);
            }
        }

        public void Clear()
        {
            lock (m_persistedAnchorNamesCacheLock)
            {
                m_persistedAnchorNamesCacheDirty = true;
                NativeLib.ClearPersistedAnchors(nativeLibToken);
            }
        }
    }

} // namespace Microsoft.MixedReality.AnchorStore
