﻿// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

//
// MainPage.xaml.cpp
// Implementation of the MainPage class.
//

#include "pch.h"
#include "MainPage.xaml.h"

#ifndef BUILD_LEAN_MUX_FOR_THE_STORE_APP
#include "LeakCycleTestCX.xaml.h"
#include "MenuBarTestPage.xaml.h"
#endif

using namespace TestAppCX;

using namespace Platform;
using namespace Windows::Foundation;
using namespace Windows::Foundation::Collections;
using namespace Windows::UI::Xaml;
using namespace Windows::UI::Xaml::Controls;
using namespace Windows::UI::Xaml::Controls::Primitives;
using namespace Windows::UI::Xaml::Data;
using namespace Windows::UI::Xaml::Input;
using namespace Windows::UI::Xaml::Interop;
using namespace Windows::UI::Xaml::Media;
using namespace Windows::UI::Xaml::Navigation;

// The Blank Page item template is documented at https://go.microsoft.com/fwlink/?LinkId=402352&clcid=0x409

MainPage::MainPage()
{
    InitializeComponent();
}


void TestAppCX::MainPage::GoToLeakTestControlPage(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
    #ifndef BUILD_LEAN_MUX_FOR_THE_STORE_APP
    auto app = dynamic_cast<App^>(Application::Current);

    app->RootFrame->Navigate(TypeName(LeakCycleTestCX::typeid), nullptr);
    #endif
}


void TestAppCX::MainPage::GoToMenuBarTestPage(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
#ifndef BUILD_LEAN_MUX_FOR_THE_STORE_APP
    auto app = dynamic_cast<App^>(Application::Current);

    app->RootFrame->Navigate(TypeName(MenuBarTestPage::typeid), nullptr);
#endif
}
