#ifndef __CUSTOMER_H
#define __CUSTOMER_H

#include<string>
#include<cstdint>

using namespace std;
enum AccountType {
	
	Prepaid,
	Postpaid
};

class CustomerBase {
   
   private:
		string m_custId;
		string m_custName;
		string m_phone;
		double m_balance;
		AccountType m_type;
  
  public:
		CustomerBase();
		CustomerBase(string,string,string,double);
		CustomerBase(string,string,string);
		CustomerBase(const CustomerBase&);
		virtual  void credit(double)=0;          
		virtual  void makeCall(double)=0;
		void setBalance(double) ;
		double getBalance() const;
		virtual void display() const=0;
};

#endif

