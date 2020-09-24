#include "Customer.h"
#include <gtest/gtest.h>

TEST(Customer,DisplayTest) {
    Customer a1(1001,"Lippman",50);
    std::string ExpectedOut="1001,Lippman,50";
    testing::internal::CaptureStdout();
    a1.display();
    std::string ActualOut = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());
}

