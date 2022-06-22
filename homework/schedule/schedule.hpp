#pragma once

#include <chrono>
#include <functional>
#include <thread>

template <typename Func, typename... Args>
void schedule(Func func, std::chrono::duration<int> duration, Args&&... args) {
    std::this_thread::sleep_for(duration);
    func(std::forward<Args>(args)...);
}
