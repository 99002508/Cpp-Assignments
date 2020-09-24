#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED
#include<bits/stdc++. h>

constexpr int max_size=50;

template<typename T>
class MyStack {
	
	private:
		T m_arr[max_size];
		int m_top;
		int m_maxlen;
  
  public:
		MyStack();
		MyStack(int);
		void push(T);
		T pop();
		T peek() const;
		bool isEmpty() const;
		bool isFull() const;
};


#endif
