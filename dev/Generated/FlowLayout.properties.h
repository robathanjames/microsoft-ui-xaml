// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

// DO NOT EDIT! This file was generated by CustomTasks.DependencyPropertyCodeGen
#pragma once

class FlowLayoutProperties
{
public:
    FlowLayoutProperties();

    void LineAlignment(winrt::FlowLayoutLineAlignment const& value);
    winrt::FlowLayoutLineAlignment LineAlignment();

    void MinColumnSpacing(double value);
    double MinColumnSpacing();

    void MinRowSpacing(double value);
    double MinRowSpacing();

    void Orientation(winrt::Orientation const& value);
    winrt::Orientation Orientation();

    static winrt::DependencyProperty LineAlignmentProperty() { return s_LineAlignmentProperty; }
    static winrt::DependencyProperty MinColumnSpacingProperty() { return s_MinColumnSpacingProperty; }
    static winrt::DependencyProperty MinRowSpacingProperty() { return s_MinRowSpacingProperty; }
    static winrt::DependencyProperty OrientationProperty() { return s_OrientationProperty; }

    static GlobalDependencyProperty s_LineAlignmentProperty;
    static GlobalDependencyProperty s_MinColumnSpacingProperty;
    static GlobalDependencyProperty s_MinRowSpacingProperty;
    static GlobalDependencyProperty s_OrientationProperty;

    static void EnsureProperties();
    static void ClearProperties();
};
