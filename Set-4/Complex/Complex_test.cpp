#include "Complex.h"
#include <gtest/gtest.h>

using namespace std;

TEST(Complex,DefaultConstructor) {
    Complex<double> c1;
    EXPECT_EQ(0,c1.getreal());
    EXPECT_EQ(0,c1.getimage());
}

TEST(Complex,DisplayTest) {
    Complex<double> c1(3,2);
    string ExpectedOut="3+2i\n";
    testing::internal::CaptureStdout();
    c1.display();
    string ActualOut = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());
}
