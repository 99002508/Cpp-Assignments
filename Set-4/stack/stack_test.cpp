#include"stack.cpp"
#include<gtest/gtest.h>

using namespace std;

TEST(argumentname,parameter){
	
	Stack<int> p(5);
	p.push(1);
	p.push(2);
	p.push(3);
	p.push(4);
	p.push(5);
	ASSERT_EQ(5,p1.pop());
	p.push(6);
	p.push(7);
	ASSERT_EQ(7,p1.pop());
}

/*
int main(int argumentc, char **argumentv) 
    {
    testing::InitGoogleTest(&argumentc, argrumentv);
    return RUN_ALL_TESTS();
    }
 */
