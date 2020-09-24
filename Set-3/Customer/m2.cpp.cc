#include "customer.h"
#include<iostream>
#include "postpaid.h"
#include "prepaid.h"
#include "postpaid.h"
using namespace std;
CustomerBase:: CustomerBase(): m_custId(""),m_phone(""),m_custName(""),m_balance(0){};





CustomerBase::CustomerBase(std::string x,std::string y,std::string z,double t) : m_custId("x"),m_phone("y"),m_custName("z"),m_balance(t){};

CustomerBase::CustomerBase(const CustomerBase &ref) : m_custId(ref.m_custId),m_phone(ref.m_phone),m_custName(ref.m_custName),m_balance(ref.m_balance){};




/*Customer::Customer(AccountType){

            m_type=savings;

}*/

/*void Customer:: Credit(double x) {

    m_balance+=x;



}*/
void CustomerBase:: setBalance(double y)  {

    m_balance=y;

}


double CustomerBase:: getBalance() const {

    return m_balance;

}

#include "prepaid.h"

PrepaidCustomer::PrepaidCustomer():CustomerBase(){


}

PrepaidCustomer::PrepaidCustomer(std::string x ,std::string y,std::string z,double r):CustomerBase(x,y,z,r){


}

//PreaidCustomer::PrepaidCustomer(std::string x,std::string y,std::string z);

void PrepaidCustomer:: credit(double x){

        double balance_prepaid=CustomerBase::getBalance();

        double cred=balance_prepaid+x;

        CustomerBase::setBalance(cred);

   // m_balance+=x;





}

void PrepaidCustomer:: makeCall(double y){

    double balance_prepaid=CustomerBase::getBalance();
    if(balance_prepaid>0){

        balance_prepaid-=y;
        CustomerBase::setBalance(balance_prepaid);

    }


}
double PrepaidCustomer::getBalance() const{

       double balance_prepaid=CustomerBase::getBalance();
       return balance_prepaid;

}

 void  PrepaidCustomer::display() const{

    std::cout<<CustomerBase::getBalance();


 }




PostpaidCustomer::PostpaidCustomer():CustomerBase(){


}

PostpaidCustomer::PostpaidCustomer(std::string x ,std::string y,std::string z,double r):CustomerBase(x,y,z,r){

       // billPay=a;
}

//PreaidCustomer::PrepaidCustomer(std::string x,std::string y,std::string z);

void PostpaidCustomer:: credit(double x){

        double balance_prepaid=CustomerBase::getBalance();
        double cred=balance_prepaid+x;

        CustomerBase::setBalance(cred);

        //int cred=balance_prepaid+x;

        //m_balance+=x;


}

void PostpaidCustomer:: makeCall(double y){



//            m_balance+=y;


}
double PostpaidCustomer::getBalance() const{

        double balance_prepaid=CustomerBase::getBalance();
       return balance_prepaid;
}
 void PostpaidCustomer::display() const{

    std::cout<<CustomerBase::getBalance();

 }




