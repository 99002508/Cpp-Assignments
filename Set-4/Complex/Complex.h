#ifndef __COMPLEX_H
#define __COMPLEX_H

template<typename T>
class Complex {
  T m_real;
  T m_image;
  public:
  Complex();
  Complex(T,T);
  void display();
  T getreal();
  T getimage();
};

#endif

