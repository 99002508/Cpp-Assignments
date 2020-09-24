#include "image.h"
#include <gtest/gtest.h>

TEST(Image,ParameterizedConstructor) {
    Image I1(2,4,200,100);
    EXPECT_EQ(200,I1.getWidth());
    EXPECT_EQ(100,I1.getHeight());

}
TEST(Image,resizeImage) {
    Image I1(2,4,200,100);
    I1.resize1(200,100);
    EXPECT_EQ(204,I1.getWidth());
}
