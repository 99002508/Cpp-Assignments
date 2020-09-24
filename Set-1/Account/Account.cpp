#include<iostream>
#include<string>
#include "Account.h"
using namespace std;


Account::Account():
    m_accNumber(0),m_accName(""),m_balance(0)
{

}
Account::Account(int num, std::string name, double bal):
    m_accNumber(num),m_accName(name),m_balance(bal)
    {

    }
Account::Account(const Account& obj):
    m_accNumber(obj.m_accNumber),m_accName(obj.m_accName),m_balance(obj.m_balance)
    {

    }
    void Account::credit(double amount)
    {
        m_balance+=amount;
    }
    void Account::debit(double amount)
    {
        m_balance+=amount;
    }
    int Account::getAccountNumber()
    {
        return m_accNumber;
    }
    std::string Account::getAccountName()
    {
        return m_accName;
    }
    double Account::getBalance() const
    {
        return m_balance;
    }
    void Account::display()
    {
        std::cout<<m_accNumber<<","<<m_accName<<","<<m_balance<<"\n";
    }


int main()
{
    Account a, a1(12345,"ashumishu",2000.565), a2=a1;
    a1.credit(56.0979);
    a2.debit(100.000);
    a1.getAccountNumber();
    a1.display();
}


