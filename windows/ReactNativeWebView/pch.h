#pragma once

#define NOMINMAX

#include <hstring.h>
#include <restrictederrorinfo.h>
#include <unknwn.h>
#include <windows.h>
#include <CppWinRTIncludes.h>
#if __has_include(<VersionMacros.h>)
  #include <VersionMacros.h>
#endif

#include <winrt/Microsoft.ReactNative.h>

#include <winrt/Windows.Data.Json.h>
#include <winrt/Windows.UI.Popups.h>
#include <winrt/Microsoft.UI.Xaml.Automation.Peers.h>
#include <winrt/Microsoft.UI.Xaml.Controls.Primitives.h>
#include <winrt/Microsoft.UI.Xaml.Controls.h>
#include <winrt/Microsoft.UI.Xaml.Media.h>
#include <winrt/Microsoft.UI.Xaml.XamlTypeInfo.h>
#include <winrt/Windows.Web.Http.h>
#include <winrt/Windows.Web.Http.Headers.h>

using namespace winrt::Windows::Foundation;
