#ifndef __ACCOUNT_H
#define __ACCOUNT_H

#include<string>
using namespace std;

class AccountBase 
{
	
	private:
		string m_accNumber;
		string m_accName;
		double m_balance;
	
	public:
		AccountBase();
		AccountBase(string,string,double);
		AccountBase(string,string);
		AccountBase(const AccountBase&);
		virtual double debit(double)=0;
		virtual double credit(double)=0;
		virtual void display()=0;
		double getBalance();
};

#endif

