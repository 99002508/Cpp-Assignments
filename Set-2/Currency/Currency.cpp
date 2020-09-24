#include<iostream>
#include "Currency.h"

using namespace std;

Currency::Currency():m_rupees(0),m_paise(0) {
}

Currency::Currency(int rs,int ps):m_rupees(rs),m_paise(ps) {
}

Currency::Currency(int rs):m_rupees(rs) {
}

Currency Currency::operator + (const Currency &ref) {

    int fpaise = m_paise + ref.m_paise;
    int frupees = m_rupees+ref.m_rupees;
    return Currency(frupees, fpaise);
}

Currency Currency::operator -(const Currency &ref) {
    int fpaise = m_paise - ref.m_paise;
    int frupees = m_rupees - ref.m_rupees;
    return Currency(frupees, fpaise);
}
/*
Currency& Currency:: operator++() {
    ++m_paise;
    return *this;
}*/

bool Currency::operator==(const Currency &ref) {
    return m_rupees == ref.m_rupees && m_paise == ref.m_paise;
}

Currency Currency :: operator <(int number)
{

    int m_rupees,m_paise;
    if((m_rupees)<number)
        return number;
    else
        return Currency(m_rupees);
}

Currency Currency :: operator > (int number)
{

    int m_rupees,m_paise;
    if((m_rupees>number))
        return Currency(m_rupees);
    else
        return number;
}

void Currency::display() {
    std::cout<<m_rupees<<":"<<m_paise<<"\n";
}
int Currency::getRup() {
    return m_rupees;
}

