#include"point.cpp"
#include<iostream>
#include<gtest/gtest.h>

using namespace std;

TEST(argname,argpara){
	Point<int> p1(43,54);
	ASSERT_EQ(43, p1.xaxis());
	ASSERT_EQ(54, p1.yaxis());
	ASSERT_EQ(69,p1.distanceFromOrigin());
	ASSERT_EQ(Q1,p1.quadrant());
	std::string ExpectedOut="43,54";
	testing::internal::CaptureStdout();
	p1.display();
	ActualOut = testing::internal::GetCapturedStdout();
	EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());
}
/*
int main(int argc, char **argv) 
    {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
    }
*/