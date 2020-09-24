#ifndef COLOR_H_INCLUDED
#define COLOR_H_INCLUDED
#include<iostream>
using namespace std;
class Colour
{
private:
    int m_r;
    int m_g;
    int m_b;


public:


    Colour():
        m_r{0}, m_g{0}, m_b{0} {}

    Colour(int r,int g,int b):
        m_r{r}, m_g{g}, m_b{b} {}

    Colour(int r):
        m_r{r}, m_g{0},m_b{0} {}

    Colour(const Colour &a):
        m_r{a.m_r}, m_g{a.m_g}, m_b{a.m_b} {}

    int invert(Colour &  );



    void display()
    {
        cout<<"r="<<m_r<<endl;
        cout<<"g="<<m_g<<endl;
        cout<<"b="<<m_b<<endl;
    }

};


#endif // COLOR_H_INCLUDED
