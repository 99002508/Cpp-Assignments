#include <iostream>
#include "customer.h"
#include "prepaid.h"
#include "postpaid.h"

using namespace std;

int main()
{
    PrepaidCustomer p1("123","1213","kiran",1235);
    p1.credit(10);
    p1.display();


    PostpaidCustomer p2("123","1222","sai",5289);
     p2.credit(10);
    p2.display();
    return 0;
}
