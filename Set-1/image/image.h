#include<string>
class Image
{
    int m_x;
    int m_y;
    int m_width;
    int m_height;

public:
    Image();
    Image(int, int, int, int);
    Image(const Image &);
    int getWidth();
    int getHeight();
    void _move(int, int);
    int scale(int, int);
    int resize1(int, int);
    void display();
};


