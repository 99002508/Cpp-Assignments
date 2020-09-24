#include <iostream>
#include "Distance.h"
#include <gtest/gtest.h>

TEST(Distance,distance)
{
    Distance a1(10,5);
    Distance a2(13,2);
    Distance a3;
    a3=a1+a2;
    std::string ExpectedOut="23.7\n";
    testing::internal::CaptureStdout();
    a3.display();
    std::string ActualOut = testing::internal::GetCapturedStdout();

    EXPECT_STREQ(ExpectedOut.c_str(),ActualOut.c_str());
}

   TEST(Distance1,distance)
{
    Distance a1(10,5);
    Distance a2(2,2);
    Distance a3;
    a3=a1-a2;
    std::string ExpectedOut="8.3\n";
    testing::internal::CaptureStdout();
    a3.display();
    std::string ActualOut = testing::internal::GetCapturedStdout();

    EXPECT_STREQ(ExpectedOut.c_str(),ActualOut.c_str());
}

