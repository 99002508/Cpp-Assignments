class Time {
  int m_hours;
  int m_minutes;
  int m_seconds;

public:
  Time();
  Time(int , int ) ;
  Time(int , int , int) ;
  Time operator +(const Time &r1);
  Time operator -(const Time &r1);
  Time operator +(int);
  Time operator -(int);
  Time& operator ++();
  Time operator ++(int);
  bool operator ==(const Time &r1);
  int getmim();
  int gethr();
};


