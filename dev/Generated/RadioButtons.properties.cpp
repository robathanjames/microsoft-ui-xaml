// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

// DO NOT EDIT! This file was generated by CustomTasks.DependencyPropertyCodeGen
#include "pch.h"
#include "common.h"
#include "RadioButtons.h"

CppWinRTActivatableClassWithDPFactory(RadioButtons)

GlobalDependencyProperty RadioButtonsProperties::s_HeaderProperty{ nullptr };
GlobalDependencyProperty RadioButtonsProperties::s_ItemsProperty{ nullptr };
GlobalDependencyProperty RadioButtonsProperties::s_ItemsSourceProperty{ nullptr };
GlobalDependencyProperty RadioButtonsProperties::s_ItemTemplateProperty{ nullptr };
GlobalDependencyProperty RadioButtonsProperties::s_MaximumColumnsProperty{ nullptr };
GlobalDependencyProperty RadioButtonsProperties::s_SelectedIndexProperty{ nullptr };
GlobalDependencyProperty RadioButtonsProperties::s_SelectedItemProperty{ nullptr };

RadioButtonsProperties::RadioButtonsProperties()
    : m_selectionChangedEventSource{static_cast<RadioButtons*>(this)}
{
    EnsureProperties();
}

void RadioButtonsProperties::EnsureProperties()
{
    if (!s_HeaderProperty)
    {
        s_HeaderProperty =
            InitializeDependencyProperty(
                L"Header",
                winrt::name_of<winrt::IInspectable>(),
                winrt::name_of<winrt::RadioButtons>(),
                false /* isAttached */,
                ValueHelper<winrt::IInspectable>::BoxedDefaultValue(),
                winrt::PropertyChangedCallback(&OnPropertyChanged));
    }
    if (!s_ItemsProperty)
    {
        s_ItemsProperty =
            InitializeDependencyProperty(
                L"Items",
                winrt::name_of<winrt::IVector<winrt::IInspectable>>(),
                winrt::name_of<winrt::RadioButtons>(),
                false /* isAttached */,
                ValueHelper<winrt::IVector<winrt::IInspectable>>::BoxedDefaultValue(),
                winrt::PropertyChangedCallback(&OnPropertyChanged));
    }
    if (!s_ItemsSourceProperty)
    {
        s_ItemsSourceProperty =
            InitializeDependencyProperty(
                L"ItemsSource",
                winrt::name_of<winrt::IInspectable>(),
                winrt::name_of<winrt::RadioButtons>(),
                false /* isAttached */,
                ValueHelper<winrt::IInspectable>::BoxedDefaultValue(),
                winrt::PropertyChangedCallback(&OnPropertyChanged));
    }
    if (!s_ItemTemplateProperty)
    {
        s_ItemTemplateProperty =
            InitializeDependencyProperty(
                L"ItemTemplate",
                winrt::name_of<winrt::DataTemplate>(),
                winrt::name_of<winrt::RadioButtons>(),
                false /* isAttached */,
                ValueHelper<winrt::DataTemplate>::BoxedDefaultValue(),
                winrt::PropertyChangedCallback(&OnPropertyChanged));
    }
    if (!s_MaximumColumnsProperty)
    {
        s_MaximumColumnsProperty =
            InitializeDependencyProperty(
                L"MaximumColumns",
                winrt::name_of<int>(),
                winrt::name_of<winrt::RadioButtons>(),
                false /* isAttached */,
                ValueHelper<int>::BoxValueIfNecessary(1),
                winrt::PropertyChangedCallback(&OnPropertyChanged));
    }
    if (!s_SelectedIndexProperty)
    {
        s_SelectedIndexProperty =
            InitializeDependencyProperty(
                L"SelectedIndex",
                winrt::name_of<int>(),
                winrt::name_of<winrt::RadioButtons>(),
                false /* isAttached */,
                ValueHelper<int>::BoxValueIfNecessary(-1),
                winrt::PropertyChangedCallback(&OnPropertyChanged));
    }
    if (!s_SelectedItemProperty)
    {
        s_SelectedItemProperty =
            InitializeDependencyProperty(
                L"SelectedItem",
                winrt::name_of<winrt::IInspectable>(),
                winrt::name_of<winrt::RadioButtons>(),
                false /* isAttached */,
                ValueHelper<winrt::IInspectable>::BoxedDefaultValue(),
                winrt::PropertyChangedCallback(&OnPropertyChanged));
    }
}

void RadioButtonsProperties::ClearProperties()
{
    s_HeaderProperty = nullptr;
    s_ItemsProperty = nullptr;
    s_ItemsSourceProperty = nullptr;
    s_ItemTemplateProperty = nullptr;
    s_MaximumColumnsProperty = nullptr;
    s_SelectedIndexProperty = nullptr;
    s_SelectedItemProperty = nullptr;
}

void RadioButtonsProperties::OnPropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::RadioButtons>();
    winrt::get_self<RadioButtons>(owner)->OnPropertyChanged(args);
}

void RadioButtonsProperties::Header(winrt::IInspectable const& value)
{
    static_cast<RadioButtons*>(this)->SetValue(s_HeaderProperty, ValueHelper<winrt::IInspectable>::BoxValueIfNecessary(value));
}

winrt::IInspectable RadioButtonsProperties::Header()
{
    return ValueHelper<winrt::IInspectable>::CastOrUnbox(static_cast<RadioButtons*>(this)->GetValue(s_HeaderProperty));
}

void RadioButtonsProperties::Items(winrt::IVector<winrt::IInspectable> const& value)
{
    static_cast<RadioButtons*>(this)->SetValue(s_ItemsProperty, ValueHelper<winrt::IVector<winrt::IInspectable>>::BoxValueIfNecessary(value));
}

winrt::IVector<winrt::IInspectable> RadioButtonsProperties::Items()
{
    return ValueHelper<winrt::IVector<winrt::IInspectable>>::CastOrUnbox(static_cast<RadioButtons*>(this)->GetValue(s_ItemsProperty));
}

void RadioButtonsProperties::ItemsSource(winrt::IInspectable const& value)
{
    static_cast<RadioButtons*>(this)->SetValue(s_ItemsSourceProperty, ValueHelper<winrt::IInspectable>::BoxValueIfNecessary(value));
}

winrt::IInspectable RadioButtonsProperties::ItemsSource()
{
    return ValueHelper<winrt::IInspectable>::CastOrUnbox(static_cast<RadioButtons*>(this)->GetValue(s_ItemsSourceProperty));
}

void RadioButtonsProperties::ItemTemplate(winrt::DataTemplate const& value)
{
    static_cast<RadioButtons*>(this)->SetValue(s_ItemTemplateProperty, ValueHelper<winrt::DataTemplate>::BoxValueIfNecessary(value));
}

winrt::DataTemplate RadioButtonsProperties::ItemTemplate()
{
    return ValueHelper<winrt::DataTemplate>::CastOrUnbox(static_cast<RadioButtons*>(this)->GetValue(s_ItemTemplateProperty));
}

void RadioButtonsProperties::MaximumColumns(int value)
{
    static_cast<RadioButtons*>(this)->SetValue(s_MaximumColumnsProperty, ValueHelper<int>::BoxValueIfNecessary(value));
}

int RadioButtonsProperties::MaximumColumns()
{
    return ValueHelper<int>::CastOrUnbox(static_cast<RadioButtons*>(this)->GetValue(s_MaximumColumnsProperty));
}

void RadioButtonsProperties::SelectedIndex(int value)
{
    static_cast<RadioButtons*>(this)->SetValue(s_SelectedIndexProperty, ValueHelper<int>::BoxValueIfNecessary(value));
}

int RadioButtonsProperties::SelectedIndex()
{
    return ValueHelper<int>::CastOrUnbox(static_cast<RadioButtons*>(this)->GetValue(s_SelectedIndexProperty));
}

void RadioButtonsProperties::SelectedItem(winrt::IInspectable const& value)
{
    static_cast<RadioButtons*>(this)->SetValue(s_SelectedItemProperty, ValueHelper<winrt::IInspectable>::BoxValueIfNecessary(value));
}

winrt::IInspectable RadioButtonsProperties::SelectedItem()
{
    return ValueHelper<winrt::IInspectable>::CastOrUnbox(static_cast<RadioButtons*>(this)->GetValue(s_SelectedItemProperty));
}

winrt::event_token RadioButtonsProperties::SelectionChanged(winrt::SelectionChangedEventHandler const& value)
{
    return m_selectionChangedEventSource.add(value);
}

void RadioButtonsProperties::SelectionChanged(winrt::event_token const& token)
{
    m_selectionChangedEventSource.remove(token);
}
