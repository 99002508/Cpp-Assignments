#include<string>
#include<iostream>
#include "image.h"
using namespace std;
Image::Image() :
    m_x(0), m_y(0), m_width(0), m_height(0)
{

}
Image::Image(int x, int y, int w, int h) :
    m_x(x), m_y(y), m_width(w), m_height(h)
{

}

Image::Image(const Image& ref) :
    m_x(ref.m_x), m_y(ref.m_y), m_width(ref.m_width), m_height(ref.m_height)
{

}
void Image::move1(int x, int y)
{
    m_x += 1;
    m_y += 1;
}
int Image::scale(int x, int y)
{
    //min balance check
    return m_x;
    return m_y;
}
int Image::resize1(int w, int h)
{
    m_width = m_width +4 ;
    m_height = m_height +4 ;
}

int Image::getWidth()
{
    return m_width;
}

int Image::getHeight()
{
    return m_height;
}
void Image::display()
{
    std::cout << m_x << "," << m_y << "\n" << m_width << "," << m_height << "\n";
}
