// Copyright (c) Microsoft Corporation.
// Licensed under the MIT License.

using System;
using System.Collections;
using UnityEngine.XR.OpenXR;

namespace Microsoft.MixedReality.OpenXR.Samples
{
    public class ConfigOptionRenderMode : ConfigOption
    {
        private OpenXRSettings.RenderMode mode = OpenXRSettings.RenderMode.MultiPass;
        private readonly string[] ModeStrings = { "Multi-Pass", "Single-Pass Instanced" };
        protected override string Label => "Render Mode";

        protected override void Initialize()
        {
            StartCoroutine(nameof(UpdateRenderMode));
        }

        protected override void Select()
        {
            mode = (OpenXRSettings.RenderMode)(((int)(mode + 1)) % Enum.GetValues(typeof(OpenXRSettings.RenderMode)).Length);

            // Attempt to set render mode
            OpenXRSettings.Instance.renderMode = mode;

            StartCoroutine(nameof(UpdateRenderMode));
        }

        private IEnumerator UpdateRenderMode()
        {
            yield return null;
            mode = OpenXRSettings.Instance.renderMode;
            Value = ModeStrings[(int)mode];
            UpdateVisuals();
        }
    }
}