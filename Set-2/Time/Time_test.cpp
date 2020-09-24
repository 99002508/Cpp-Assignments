#include "Time.h"
#include <gtest/gtest.h>
TEST(Time,DefConstructor)
{
   Time t;
   EXPECT_EQ(0,t.getmim());
   EXPECT_EQ(0,t.gethr());

}

