// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

// DO NOT EDIT! This file was generated by CustomTasks.DependencyPropertyCodeGen
#include "pch.h"
#include "common.h"
#include "StackLayout.h"

CppWinRTActivatableClassWithDPFactory(StackLayout)

GlobalDependencyProperty StackLayoutProperties::s_OrientationProperty{ nullptr };
GlobalDependencyProperty StackLayoutProperties::s_SpacingProperty{ nullptr };

StackLayoutProperties::StackLayoutProperties()
{
    EnsureProperties();
}

void StackLayoutProperties::EnsureProperties()
{
    if (!s_OrientationProperty)
    {
        s_OrientationProperty =
            InitializeDependencyProperty(
                L"Orientation",
                winrt::name_of<winrt::Orientation>(),
                winrt::name_of<winrt::StackLayout>(),
                false /* isAttached */,
                ValueHelper<winrt::Orientation>::BoxedDefaultValue(),
                nullptr);
    }
    if (!s_SpacingProperty)
    {
        s_SpacingProperty =
            InitializeDependencyProperty(
                L"Spacing",
                winrt::name_of<double>(),
                winrt::name_of<winrt::StackLayout>(),
                false /* isAttached */,
                ValueHelper<double>::BoxedDefaultValue(),
                nullptr);
    }
}

void StackLayoutProperties::ClearProperties()
{
    s_OrientationProperty = nullptr;
    s_SpacingProperty = nullptr;
}

void StackLayoutProperties::Orientation(winrt::Orientation const& value)
{
    static_cast<StackLayout*>(this)->SetValue(s_OrientationProperty, ValueHelper<winrt::Orientation>::BoxValueIfNecessary(value));
}

winrt::Orientation StackLayoutProperties::Orientation()
{
    return ValueHelper<winrt::Orientation>::CastOrUnbox(static_cast<StackLayout*>(this)->GetValue(s_OrientationProperty));
}

void StackLayoutProperties::Spacing(double value)
{
    static_cast<StackLayout*>(this)->SetValue(s_SpacingProperty, ValueHelper<double>::BoxValueIfNecessary(value));
}

double StackLayoutProperties::Spacing()
{
    return ValueHelper<double>::CastOrUnbox(static_cast<StackLayout*>(this)->GetValue(s_SpacingProperty));
}
