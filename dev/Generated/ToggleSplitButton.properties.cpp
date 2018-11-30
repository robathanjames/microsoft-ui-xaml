// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

// DO NOT EDIT! This file was generated by CustomTasks.DependencyPropertyCodeGen
#include "pch.h"
#include "common.h"
#include "ToggleSplitButton.h"

CppWinRTActivatableClassWithDPFactory(ToggleSplitButton)

GlobalDependencyProperty ToggleSplitButtonProperties::s_IsCheckedProperty{ nullptr };

ToggleSplitButtonProperties::ToggleSplitButtonProperties()
    : m_isCheckedChangedEventSource{static_cast<ToggleSplitButton*>(this)}
{
    EnsureProperties();
}

void ToggleSplitButtonProperties::EnsureProperties()
{
    SplitButton::EnsureProperties();
    if (!s_IsCheckedProperty)
    {
        s_IsCheckedProperty =
            InitializeDependencyProperty(
                L"IsChecked",
                winrt::name_of<bool>(),
                winrt::name_of<winrt::ToggleSplitButton>(),
                false /* isAttached */,
                ValueHelper<bool>::BoxedDefaultValue(),
                winrt::PropertyChangedCallback(&OnPropertyChanged));
    }
}

void ToggleSplitButtonProperties::ClearProperties()
{
    s_IsCheckedProperty = nullptr;
    SplitButton::ClearProperties();
}

void ToggleSplitButtonProperties::OnPropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::ToggleSplitButton>();
    winrt::get_self<ToggleSplitButton>(owner)->OnPropertyChanged(args);
}

void ToggleSplitButtonProperties::IsChecked(bool value)
{
    static_cast<ToggleSplitButton*>(this)->SetValue(s_IsCheckedProperty, ValueHelper<bool>::BoxValueIfNecessary(value));
}

bool ToggleSplitButtonProperties::IsChecked()
{
    return ValueHelper<bool>::CastOrUnbox(static_cast<ToggleSplitButton*>(this)->GetValue(s_IsCheckedProperty));
}

winrt::event_token ToggleSplitButtonProperties::IsCheckedChanged(winrt::TypedEventHandler<winrt::ToggleSplitButton, winrt::ToggleSplitButtonIsCheckedChangedEventArgs> const& value)
{
    return m_isCheckedChangedEventSource.add(value);
}

void ToggleSplitButtonProperties::IsCheckedChanged(winrt::event_token const& token)
{
    m_isCheckedChangedEventSource.remove(token);
}
