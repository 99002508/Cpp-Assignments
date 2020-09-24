#include <iostream>
#include "point.h"
using namespace std;

int main()
{
 Point p (1,2);
 p.display();
 p.quadrant(p);
 cout<<p.quadrant(p);
    return 0;
}
