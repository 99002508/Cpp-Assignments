#include <iostream>
#include "Complex.h"

Complex::Complex(): m_real(0), m_imag(0){} //Default Constructor

Complex::Complex(int x, int y): m_real(x), m_imag(y){} //Parameterised Constructor

Complex :: Complex(int t): m_real(t) {}

Complex Complex:: operator+ (const Complex &ref)
{

    int f_real = m_real + ref.m_real;
    int f_img = m_imag + ref.m_imag;
    return Complex(f_real,f_img);
}

Complex Complex::operator- (const Complex &ref)
{

    int f_real = m_real - ref.m_real;
    int f_img = m_imag - ref.m_imag;
    return Complex(f_real,f_img);
}

Complex Complex::operator* (const Complex &ref)
{

    int f_real = m_real * ref.m_real;
    int f_img = m_imag * ref.m_imag;
    return Complex(f_real,f_img);
}

Complex& Complex::operator++(){ // pre

++m_imag;
return *this;
}

Complex Complex :: operator ++(int number) //post
{

    Complex ob(*this);
    m_real++;
    return ob;
}

bool Complex :: operator == (const Complex &ref)
{

    return (m_real == ref.m_real && m_imag == ref.m_imag);

}

void Complex :: display ()
{

    std::cout<<m_real<<","<<m_imag<<"\n";
}

float Complex :: getreal() //returning real part
{
    return m_real;
}

float Complex :: getimag() //returning img part
{
    return m_imag;
}
