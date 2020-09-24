#include<string>
#include<iostream>
#include "box.h"
using namespace std;
Box::Box() :
    m_length(0), m_breadth(0), m_height(0) {

}
Box::Box(int l, int b, int h) :
  m_length(l), m_breadth(b), m_height(h) {

}

Box::Box(int l) :
  m_length(l) {

}
Box::Box(const Box& ref) :
        m_length(ref.m_length), m_breadth(ref.m_breadth),
                                              m_height(ref.m_height) {

}
void Box::breadth(int b1) {
  m_breadth += b1;
}
void Box::length(int l1) {
  //min balance check
  m_length += l1;
}
void Box::height(int h1) {
  //min balance check
  m_height += h1;
}

int Box::getLength() {
  return m_length;
}
int Box::getBreadth() {
  return m_breadth;
}
int Box::getHeight() {
  return m_height;
}
void Box::display() {
    std::cout << m_length << "," << m_breadth << ","
                                         << m_height << "\n";
}

