#include "currency.h"
#include <gtest/gtest.h>

TEST(Currency,DefaultConstructor) {
    Currency a1;
    EXPECT_EQ(0,a1.getRup());
}


