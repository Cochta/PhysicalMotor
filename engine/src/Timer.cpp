//
// Created by Coch on 13.10.2023.
//
#include "Timer.h"

void Timer::Init() noexcept
{
    _startTime = std::chrono::high_resolution_clock::now();
}

void Timer::Tick() noexcept
{
    auto currentTime = std::chrono::high_resolution_clock::now();
    DeltaTime = std::chrono::duration<float>(currentTime - _startTime).count();
    _startTime = currentTime;
}