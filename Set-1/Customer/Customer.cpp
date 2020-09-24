#include<iostream>
#include "Customer.h"

const double CALL_RATE = 1.0;
Customer::Customer() :
    m_custId(0), m_phone(0), m_custName(0), m_balance(0) {}

Customer::Customer(int id,string cname,int num,double bal) :
   m_custId(id), m_custName(cname),m_phone(num), m_balance(bal) {}

Customer::Customer(int id, string name,int ph):
  m_custId(id), m_custName(name),m_phone(ph){}


Customer::Customer(const Customer& ref) :
    m_custId(ref.m_custId), m_phone(ref.m_phone), m_type(ref.m_type), m_custName(ref.m_custName), m_balance(ref.m_balance){
}
void Customer::credit(double cre) {
   m_balance+=cre;
   cout<<"\n Credited amount: "<<cre;
}
void Customer::makeCall(int nmins) {
    m_balance -= nmins * CALL_RATE;
    cout<<"\n Remaining Balance :" <<m_balance;
}

double Customer::getBalance(){
    cout<<"\n Total Balance is :" <<m_balance;
    return m_balance;
}
void Customer::display() {
    cout << "Customer ID is: "<<m_custId<<" Customer Name: "<<m_custName<<", Balance: " << m_balance;
}
/*
int main()
{
    Customer a1(1001,"prateek",2456,5000);
    Customer a2(a1);
    a1.credit(2000);
    a1.makeCall(15);
    a1.getBalance();
    a1.display();
    return 0;
}
*/
