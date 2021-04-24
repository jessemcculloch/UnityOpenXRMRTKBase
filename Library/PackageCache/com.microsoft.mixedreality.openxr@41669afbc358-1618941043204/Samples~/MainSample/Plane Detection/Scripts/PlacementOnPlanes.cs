// Copyright (c) Microsoft Corporation.
// Licensed under the MIT License.

using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;
using Unity.Collections;

namespace Microsoft.MixedReality.OpenXR.Samples
{
    /// <summary>
    /// Raycast to all planes in the scene, creating an anchor for each raycast hit.
    /// </summary>

    [RequireComponent(typeof(ARAnchorManager))]
    [RequireComponent(typeof(ARPlaneManager))]
    [RequireComponent(typeof(ARRaycastManager))]
    public class PlacementOnPlanes : MonoBehaviour
    {
        public GameObject m_raycastRayIndicator = null;

        private static readonly InputFeatureUsage<Vector3> PointerPosition = new InputFeatureUsage<Vector3>("PointerPosition");
        private static readonly InputFeatureUsage<Quaternion> PointerRotation = new InputFeatureUsage<Quaternion>("PointerRotation");
        private bool[] m_wasHandTapping = { true, true };

        private ARPlaneManager m_planeManager;
        private ARRaycastManager m_raycastManager;
        private ARAnchorManager m_anchorManager;

        private void Awake()
        {
            m_planeManager = GetComponent<ARPlaneManager>();
            m_raycastManager = GetComponent<ARRaycastManager>();
            m_anchorManager = GetComponent<ARAnchorManager>();
        }

        private void Update()
        {
            for (int i = 0; i < 2; i++)
            {
                InputDevice device = InputDevices.GetDeviceAtXRNode((i == 0) ? XRNode.RightHand : XRNode.LeftHand);
                if (!device.TryGetFeatureValue(CommonUsages.primaryButton, out bool isHandTapping) ||
                    !device.TryGetFeatureValue(PointerPosition, out Vector3 handPosition) ||
                    !device.TryGetFeatureValue(PointerRotation, out Quaternion handRotation))
                {
                    continue;
                }

                if (isHandTapping && !m_wasHandTapping[i])
                {
                    Raycast(new Pose(handPosition, handRotation));
                }
                m_wasHandTapping[i] = isHandTapping;
            }
        }

        private void Raycast(Pose handPose)
        {
            m_raycastRayIndicator.transform.SetPositionAndRotation(handPose.position, handPose.rotation);
            m_raycastRayIndicator.SetActive(true);

            List<ARRaycastHit> raycastHits = new List<ARRaycastHit>();
            if (m_raycastManager.Raycast(new Ray(handPose.position, handPose.forward), raycastHits, TrackableType.PlaneWithinPolygon))
            {
                Debug.Log($"{raycastHits.Count} plane{(raycastHits.Count == 1 ? "" : "s")} hit:");

                // Raycast hits are sorted by distance, so the first one will be the closest hit.
                var raycastHit = raycastHits[0];
                ARPlane plane = raycastHit.trackable as ARPlane;
                ARAnchor anchor = m_anchorManager.AttachAnchor(plane, raycastHit.pose);
                Debug.Log($"Anchor {anchor.trackableId} created on plane {raycastHit.trackableId}");
            }
            else
            {
                Debug.Log($"No planes hit.");
            }
        }

    }
}
