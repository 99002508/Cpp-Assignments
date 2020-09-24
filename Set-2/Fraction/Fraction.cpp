
#include <bits/stdc++.h>
#include "Fraction.h"

using namespace std;

Fraction::Fraction(): m_numerator(0), m_denominator(0){} //Default Constructor

Fraction::Fraction(int x, int y): m_numerator(x), m_denominator(y){} //Parameterised Constructor

Fraction :: Fraction(int t): m_numerator(t) {}

Fraction Fraction:: operator+ (const Fraction &ref)
{
    int f_numerator = m_numerator + ref.m_numerator;
    int f_denominator = m_denominator + ref.m_denominator;
    return Fraction(f_numerator,f_denominator);
}

Fraction Fraction::operator- (const Fraction &ref)
{

    int f_numerator = m_numerator - ref.m_numerator;
    int f_denominator = m_denominator - ref.m_denominator;
    return Fraction(f_numerator,f_denominator);
}

Fraction Fraction::operator* (const Fraction &ref)
{

    int f_numerator = m_numerator * ref.m_numerator;
    int f_denominator = m_denominator * ref.m_denominator;
    return Fraction(f_numerator,f_denominator);
}

Fraction Fraction :: operator +(int number) //post
{
    int f_numerator=f_numerator+number;
    int f_denominator=f_denominator+number;
    return Fraction(f_numerator,f_denominator);
}
Fraction Fraction :: operator -(int number) //post
{

    int f_numerator=f_numerator-number;
    int f_denominator=f_denominator-number;
    return Fraction(f_numerator,f_denominator);
}

bool Fraction :: operator == (const Fraction &ref)
{

    return (m_numerator == ref.m_numerator && m_denominator == ref.m_denominator);

}
Fraction Fraction :: operator <(int number)
{

    int f_numerator,f_denominator;
    if((f_numerator/f_denominator)<number)
        return number;
    else
        return Fraction(f_numerator,f_denominator);
}
Fraction Fraction :: operator > (int number)
{

    int f_numerator,f_denominator;
    if((f_numerator/f_denominator)>number)
        return Fraction(f_numerator,f_denominator);
    else
        return number;
}

void Fraction :: display ()
{

    std::cout<<m_numerator<<"/"<<m_denominator<<"\n";
}
void Fraction :: simplify(int numt,int deno)
{

    int temp;
    temp = __gcd(numt, deno);
    numt = deno / temp;
    numt = deno / temp;

    cout << "numerator = " << numt << ", denominator = " << deno << endl;
}
bool Fraction :: isSimplest(int numt,int deno)
{

}
int Fraction :: getnumerator() //returning real part
{
    return m_numerator;
}

int Fraction :: getdenominator() //returning img part
{
    return m_denominator;
}



