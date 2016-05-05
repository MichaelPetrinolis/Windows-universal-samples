//*********************************************************
//
// Copyright (c) Microsoft. All rights reserved.
// This code is licensed under the MIT License (MIT).
// THIS CODE IS PROVIDED *AS IS* WITHOUT WARRANTY OF
// ANY KIND, EITHER EXPRESS OR IMPLIED, INCLUDING ANY
// IMPLIED WARRANTIES OF FITNESS FOR A PARTICULAR
// PURPOSE, MERCHANTABILITY, OR NON-INFRINGEMENT.
//
//*********************************************************
//-----------------------------------------------------------------------------
// <auto-generated> 
//   This code was generated by a tool. 
// 
//   Changes to this file may cause incorrect behavior and will be lost if  
//   the code is regenerated.
//
//   Tool: AllJoynCodeGenerator.exe
//
//   This tool is located in the Windows 10 SDK and the Windows 10 AllJoyn 
//   Visual Studio Extension in the Visual Studio Gallery.  
//
//   The generated code should be packaged in a Windows 10 C++/CX Runtime  
//   Component which can be consumed in any UWP-supported language using 
//   APIs that are available in Windows.Devices.AllJoyn.
//
//   Using AllJoynCodeGenerator - Invoke the following command with a valid 
//   Introspection XML file and a writable output directory:
//     AllJoynCodeGenerator -i <INPUT XML FILE> -o <OUTPUT DIRECTORY>
// </auto-generated>
//-----------------------------------------------------------------------------
#include "pch.h"

using namespace Microsoft::WRL;
using namespace Platform;
using namespace Windows::Foundation;
using namespace Windows::Foundation::Collections;
using namespace Windows::Devices::AllJoyn;
using namespace org::alljoyn::Onboarding;

// Note: Unlike an Interface implementation, which provides a single handler for each member, the event
// model allows for 0 or more listeners to be registered. The EventAdapter implementation deals with this
// difference by implementing a last-writer-wins policy. The lack of any return value (i.e., 0 listeners)
// is handled by returning a null result.

// Methods
IAsyncOperation<OnboardingConfigureWiFiResult^>^ OnboardingServiceEventAdapter::ConfigureWiFiAsync(_In_ AllJoynMessageInfo^ info, _In_ Platform::String^ interfaceMemberSSID, _In_ Platform::String^ interfaceMemberPassphrase, _In_ int16 interfaceMemberAuthType)
{
    auto args = ref new OnboardingConfigureWiFiCalledEventArgs(info, interfaceMemberSSID, interfaceMemberPassphrase, interfaceMemberAuthType);
    ConfigureWiFiCalled(this, args);
    return OnboardingConfigureWiFiCalledEventArgs::GetResultAsync(args);
}

IAsyncOperation<OnboardingConnectResult^>^ OnboardingServiceEventAdapter::ConnectAsync(_In_ AllJoynMessageInfo^ info)
{
    auto args = ref new OnboardingConnectCalledEventArgs(info);
    ConnectCalled(this, args);
    return OnboardingConnectCalledEventArgs::GetResultAsync(args);
}

IAsyncOperation<OnboardingOffboardResult^>^ OnboardingServiceEventAdapter::OffboardAsync(_In_ AllJoynMessageInfo^ info)
{
    auto args = ref new OnboardingOffboardCalledEventArgs(info);
    OffboardCalled(this, args);
    return OnboardingOffboardCalledEventArgs::GetResultAsync(args);
}

IAsyncOperation<OnboardingGetScanInfoResult^>^ OnboardingServiceEventAdapter::GetScanInfoAsync(_In_ AllJoynMessageInfo^ info)
{
    auto args = ref new OnboardingGetScanInfoCalledEventArgs(info);
    GetScanInfoCalled(this, args);
    return OnboardingGetScanInfoCalledEventArgs::GetResultAsync(args);
}

// Property Reads
IAsyncOperation<OnboardingGetVersionResult^>^ OnboardingServiceEventAdapter::GetVersionAsync(_In_ AllJoynMessageInfo^ info)
{
    auto args = ref new OnboardingGetVersionRequestedEventArgs(info);
    GetVersionRequested(this, args);
    return OnboardingGetVersionRequestedEventArgs::GetResultAsync(args);
}

IAsyncOperation<OnboardingGetStateResult^>^ OnboardingServiceEventAdapter::GetStateAsync(_In_ AllJoynMessageInfo^ info)
{
    auto args = ref new OnboardingGetStateRequestedEventArgs(info);
    GetStateRequested(this, args);
    return OnboardingGetStateRequestedEventArgs::GetResultAsync(args);
}

IAsyncOperation<OnboardingGetLastErrorResult^>^ OnboardingServiceEventAdapter::GetLastErrorAsync(_In_ AllJoynMessageInfo^ info)
{
    auto args = ref new OnboardingGetLastErrorRequestedEventArgs(info);
    GetLastErrorRequested(this, args);
    return OnboardingGetLastErrorRequestedEventArgs::GetResultAsync(args);
}

// Property Writes
