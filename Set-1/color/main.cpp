#include <iostream>
#include "color.h"

using namespace std;

int main()
{
    Colour A(108,100,34);
    A.invert(A);
    A.display();
    return 0;
}
