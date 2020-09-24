#ifndef __POSTPAID_H
#define __POSTPAID_H

#include<string>
#include<cstdint>

#include "customer.h"

using namespace std;

class PostpaidCustomer : public CustomerBase {
  void billPay(double);
  int m_billDate;
  public:
  PostpaidCustomer();
  PostpaidCustomer(std::string,std::string,std::string,double);
  PostpaidCustomer(std::string,std::string,std::string);
  void credit(double) override;        
  void makeCall(double) override;
  double getBalance() const;
  void display() const  override;

};

#endif

