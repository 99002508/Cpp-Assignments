#include<string>
#ifndef ACCOUNT_H
#define ACCOUNT_H

class Account
{
    private:
        int m_accNumber;
        std::string m_accName;
        double m_balance;
    public:
        Account();
        Account(int, std::string, double);
        Account(int, int);
        Account(const Account &);
        void credit(double);
        void debit (double);
        int getAccountNumber();
        std::string getAccountName();
        double getBalance() const;
        void display();


};

#endif
