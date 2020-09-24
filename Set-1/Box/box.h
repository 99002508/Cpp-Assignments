#include<string>
class Box {
  int m_length;
  int m_breadth;
  int m_height;


public:
  Box();
  Box(int, int, int);
  Box(int);
  Box(const Box &);

  void breadth(int);
  void length(int);
  void height(int);
  int getLength();
  int getBreadth();
  int getHeight();
  void display();
};

