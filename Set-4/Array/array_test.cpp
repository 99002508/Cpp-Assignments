#include"array.cpp"
#include<iostream>
#include<gtest/gtest.h>

using namespace std;

TEST(MyArray,DefaultConstructor){ //for default constructor
	
	MyArray<int> ary1;
	ASSERT_EQ(0,ary.sum());
	ASSERT_EQ(0,ary.sort());
	ASSERT_EQ(0,ary.max());
	ASSERT_EQ(0,ary.min());
	ASSERT_EQ(false,ary.search()); //no elements in the array
	ASSERT_EQ(0,ary.reverse());
}

TEST(MyArray,ParameterConstructor){ //for parameterized constructor
	
	MyArray<int> ary2(5);
	ASSERT_EQ(5,ary2.sum());
	ASSERT_EQ(5,ary2.sort());
	ASSERT_EQ(5,ary2.max());
	ASSERT_EQ(5,ary2.min());
	ASSERT_EQ(true,ary2.search());
	ASSERT_EQ(5,ary2.reverse());
}

int main(int argumentc, char **argumentv) 
    {
		testing::InitGoogleTest(&argumentc, argumentv);
		return RUN_ALL_TESTS();
    }
	
/*
Sum of the array ://ashu1 
sum=0;
arr[n]; n=size of the array n=5
input elements to the array 1,2,3,4,5
sum=15*/	

/*
Sum of the array ://ashu2
sum=0;
arr[n]; n=size of the array n=5
input elements to the array 10,20,30,40,50
sum=130*/	
