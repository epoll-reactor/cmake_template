#include "gtest/gtest.h"

#include "../../template_lib/include/return_zero.hpp"

TEST(hello_world, return_zero)
{
    ASSERT_EQ(::return_zero(), 0);
}
