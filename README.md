---
page_type: sample
name: UnityOpenXRMRTKBase 
description: Unity project repo that is setup with the Microsoft Mixed Reality Toolkit Foundations and Standard Assets packages as well as the Microsoft OpenXR Plugin package.
languages:
- csharp
products:
- windows-mixed-reality
- hololens
---

# UnityOpenXRMRTKBase

![License](https://img.shields.io/badge/license-MIT-green.svg)

Unity version | MRTK Foundations Package | MRTK Standard Assets Package | Microsoft Spatial Audio Spatializer Package 
:-----------------: | :----------------: | :-----------------: | :----------------: |
2020.3.5f1 | 2.7.0-preview.3 | 2.7.0-preview.3 | 1.0.196

This repo contains a Unity project that is setup with the Microsoft Mixed Reality Toolkit Foundations and Standard Assets packages as well as the Microsoft OpenXR Plugin package. 

The idea is that you can clone this repo and have a project all set up for creating a HoloLens or Windows Mixed Reality UWP project using OpenXR and XR SDK.

## Contents

| File/folder | Description |
|-------------|-------------|
| `Assets` | Unity assets, scenes, prefabs, and scripts. |
| `Packages` | Project manifest and packages list. |
| `ProjectSettings` | Unity asset setting files. |
| `UserSettings` | Generated user settings from Unity. |
| `.gitignore` | Define what to ignore at commit time. |
| `.vsconfig` | Visual Studio configuration file. |
| `README.md` | This README file. |
| `LICENSE`   | The license for the sample. |

## Setup

1. Clone or download this sample repository

## Running the project

1. Open build settings and switch platform to **Universal Windows Platform**
2. Change Minimum Platform Version to **10.0.18362.0**
3. Close Build Settings
4. Open Scene in Scenes folder called **OpenXRMRTKBaseScene**
5. Go build the thing!

## Changes that have been made to the profiles

- Input/Hand Tracking hand visualizations changed to Editor only
- Boundary turned off
- Teleport turned off
- Spatial Awareness set to use occlusion shader for material
- Diagnostics turned on to display framerate counter