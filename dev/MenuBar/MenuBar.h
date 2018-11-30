﻿// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

#pragma once

#include "MenuBar.g.h"
#include "MenuBar.properties.h"

class MenuBar :
    public ReferenceTracker<MenuBar, winrt::implementation::MenuBarT>,
    public MenuBarProperties
{
public:
    MenuBar();
    virtual ~MenuBar();

    void OnApplyTemplate();

    bool IsFlyoutOpen() { return m_isFlyoutOpen; };
    void IsFlyoutOpen(bool state);

public:
    // IUIElement / IUIElementOverridesHelper
    winrt::AutomationPeer OnCreateAutomationPeer();

private:

    void SetUpTemplateParts();

    bool m_isFlyoutOpen{ false };

    // Visual components
    tracker_ref<winrt::ItemsControl> m_contentRoot{ this };
    tracker_ref<winrt::Grid> m_layoutRoot{ this };
}; 

