#include <iostream>
#include"Time.h"
using namespace std;

Time::Time():m_hours(0),m_minutes(0),m_seconds(0) { }
Time::Time(int hh, int mm) : m_hours(hh), m_minutes(mm) {}
Time::Time(int hh, int mm,int ss) : m_hours(hh), m_minutes(mm), m_seconds(ss) {}


Time Time:: operator+(const Time &r1) {
  int th = m_hours + r1.m_hours;
  int tm = m_minutes + r1.m_minutes;
  return Time(th,tm);
}
Time Time:: operator-(const Time &r1) {
  int th = m_hours-r1.m_hours;
  int tm = m_minutes + r1.m_minutes;
  return Time(th,tm);
}
Time Time:: operator +(int nmins){
    int tmins = m_minutes + nmins;
    int thrs = m_hours;
    return Time(thrs, tmins);

}
Time Time:: operator -(int nmins){
     int tmins = m_minutes - nmins;
    int thrs = m_hours;
    return Time(thrs, tmins);

}
Time& Time:: operator++() {
  ++m_minutes;
  return *this;
}
Time Time:: operator++(int dummy) {
  Time orig(*this);
  ++m_minutes;
  return orig;
}
bool Time:: operator==(const Time &r1) {
  return m_hours == r1.m_hours && m_minutes == r1.m_minutes;
}

int Time:: getmim(){
    return m_minutes;
}
int Time:: gethr(){
    return m_hours;
}



