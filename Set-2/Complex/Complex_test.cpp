#include "Complex.h"
#include <gtest/gtest.h>
#include <iostream>

using namespace std;

TEST(Complex,DefaultConstructor) {
    Complex c1;
    EXPECT_EQ(0,c1.getreal());
    EXPECT_EQ(0,c1.getimag());
}




TEST(Complex,DisplayTest) {
    Complex c1(3,2);
    string ExpectedOut="3,2\n";
    testing::internal::CaptureStdout();
    c1.display();
    string ActualOut = testing::internal::GetCapturedStdout();
    //testing::internal::CaptureStdout();
    EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());
}

