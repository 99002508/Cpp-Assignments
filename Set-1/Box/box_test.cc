#include "box.h"
#include <gtest/gtest.h>
TEST(Box,DefaultConstructor) {
    Box b1;
    EXPECT_EQ(0,b1.getLength());
    EXPECT_EQ(0,b1.getBreadth());
    EXPECT_EQ(0,b1.getHeight());

}


TEST(Box,ParameterizedConstructor) {
    Box b1(2,3,5);
    EXPECT_EQ(2,b1.getLength());
    EXPECT_EQ(1,b1.getBreadth());
    EXPECT_EQ(5,b1.getHeight());

}
