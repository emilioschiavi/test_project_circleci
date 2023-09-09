#include <gtest/gtest.h>
#include "MyClass.h"

using namespace my_class;

TEST(MyClassTest, WhenXNullThenReturnMinusY)
{
    // Given
    MyClass testee;

    // When // Then
    EXPECT_EQ(testee.Foo(0, 13), -13);
}

TEST(MyClassTest, WhenXNotNullThenReturnTheSum)
{
    // Given
    MyClass testee;

    // When // Then
    EXPECT_EQ(testee.Foo(12, 13), 25);
}