#include "MyClass.h"

using namespace my_class;

int32_t MyClass::Foo(int32_t x, int32_t y) const
{
    if (x == 0)
    {
        return -y;
    }

    return x + y + 1;
}
