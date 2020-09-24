#include <iostream>
using namespace std;

enum AccountType {
    Saving, Current
    };
class Customer {
    int m_custId;
    int m_phone;
    char m_type;
    std::string m_custName;
    double m_balance;
  public:
    Customer();
    Customer(int, std::string, int, double);
    Customer(int, std::string, int);
    Customer(const Customer &);
    void credit(double);
    void makeCall(int);
    double getBalance();
    void display();
};

