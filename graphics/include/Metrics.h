//
// Created by Coch on 16.10.2023.
//
#pragma once

namespace Metrics // Meter in physical world ~=~ centimeter irl
{
    constexpr float MeterRatio = 100.f;

    [[nodiscard]] constexpr float PixelsToMeters(float pixels) noexcept {
        return pixels / MeterRatio;
    }

    [[nodiscard]] constexpr float MetersToPixels(float meters) noexcept {
        return meters * MeterRatio;
    }

    constexpr int Width = MetersToPixels(10);
    constexpr int Height = MetersToPixels(10);
}
