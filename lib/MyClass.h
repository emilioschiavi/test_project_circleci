#pragma once

#include <cstdint>

namespace my_class
{
    class MyClass
    {
    public:
        MyClass() = default;
        ~MyClass() = default;

        int32_t Foo(int32_t x, int32_t y) const;
    };
}
