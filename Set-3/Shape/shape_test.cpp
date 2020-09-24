#include<gtest/gtest.h>
#include "triangle.h"
#include "polygon.h"
#include "shape.h"
#include <math.h>
#include"rectangle.h"
#include "circle.h"

using namespace std;

TEST(shape,parameter)
{
    Polygon *tp;
    tp=new Triangle(30,41,52);
    EXPECT_EQ(123,tp->circumference());
    ASSERT_EQ(635.3,tp->area());
    IShape *t1;
    t1=new Circle(12.0);
    EXPECT_EQ(452.16,t1->circumference());
}

