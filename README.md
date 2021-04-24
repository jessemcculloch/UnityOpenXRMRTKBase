# UnityOpenXRMRTKBase

This repo contains a Unity project that is setup with the Microsoft Mixed Reality Toolkit Foundations and Standard Assets packages as well as the Microsoft OpenXR Plugin package. 

The idea is that you can clone this repo and have a project all set up for creating a HoloLens or Windows Mixed Reality UWP project using OpenXR and XR SDK.

- Current Unity Version: 2020.3.5f1
- Current MRTK Foundations Package Version: 2.7.0-preview.3
- Current MRTK Standard Assets Package Version: 2.7.0-preview.3
- Current Microsoft Spatial Audio Spatializer Package Version: 1.0.196

Steps to use the cloned project

1. Open build settings and switch platform to **Universal Windows Platform**
2. Change Minimum Platform Version to **10.0.18362.0**
3. Close Build Settings
4. Open Scene in Scenes folder called **OpenXRMRTKBaseScene**
5. Go build the thing!

Changes that have been made to the profiles:
- Input/Hand Tracking hand visualizations changed to Editor only
- Boundary turned off
- Teleport turned off
- Spatial Awareness set to use occlusion shader for material
- Diagnostics turned on to display framerate counter