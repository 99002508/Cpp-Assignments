#include "ipaddress.h"
#include<iostream>
#include <gtest/gtest.h>
TEST(IPAddress,getIPClass)
{
    IPAddress I1;
    //IPAddress I2(128);
    EXPECT_EQ("Class A",I1.getIPClass(000));
   //XPECT_EQ(true,I1.isLoopBack(127,000,000,001));
    //EXPECT_EQ("Class B",I2.getIPClass(128));
    //EXPECT_EQ(0,b1.getBreadth());
    //EXPECT_EQ(0,b1.getHeight());

}
