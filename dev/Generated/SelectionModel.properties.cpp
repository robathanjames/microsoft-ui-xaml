// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

// DO NOT EDIT! This file was generated by CustomTasks.DependencyPropertyCodeGen
#include "pch.h"
#include "common.h"
#include "SelectionModel.h"

CppWinRTActivatableClassWithBasicFactory(SelectionModel)


SelectionModelProperties::SelectionModelProperties()
    : m_childrenRequestedEventSource{static_cast<SelectionModel*>(this)}
    , m_selectionChangedEventSource{static_cast<SelectionModel*>(this)}
{
}

void SelectionModelProperties::EnsureProperties()
{
}

void SelectionModelProperties::ClearProperties()
{
}

winrt::event_token SelectionModelProperties::ChildrenRequested(winrt::TypedEventHandler<winrt::SelectionModel, winrt::SelectionModelChildrenRequestedEventArgs> const& value)
{
    return m_childrenRequestedEventSource.add(value);
}

void SelectionModelProperties::ChildrenRequested(winrt::event_token const& token)
{
    m_childrenRequestedEventSource.remove(token);
}

winrt::event_token SelectionModelProperties::SelectionChanged(winrt::TypedEventHandler<winrt::SelectionModel, winrt::SelectionModelSelectionChangedEventArgs> const& value)
{
    return m_selectionChangedEventSource.add(value);
}

void SelectionModelProperties::SelectionChanged(winrt::event_token const& token)
{
    m_selectionChangedEventSource.remove(token);
}
