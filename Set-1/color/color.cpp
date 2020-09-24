#include<iostream>
#include "color.h"

enum color_t{red, black,white ,blue ,green};
Colour::invert(Colour & a)
    {
        a.m_b=255-a.m_b;
        a.m_g=255-a.m_g;
        a.m_r=255-a.m_r;

        return 0;
    }
