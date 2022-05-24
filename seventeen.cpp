// 17.WAP to overload member function in base and derived class.

#include <iostream>
#include <conio.h>
using namespace std;

double const PI = 3.14159;

class Shape
{
protected:
    /* data */
    int r1, r2, h1;
    int l1, b1, h2;
    int r3;

public:
    double volume(int r, int h) // cylinder
    {
        return (PI * r * r * h);
    }
    double volume(int r) // sphere
    {
        return (4.0 / 3.0 * PI * r * r * r);
    }
    double volume(int l, int b, int h) // cuboid
    {
        return (l * b * h);
    }

    Shape(/* args */) {}
    ~Shape() {}
};

class Volume : public Shape
{
public:
    void getdata(int r3) // Sphere
    {
        this->r3 = r3;
        volume(r3);
    }
    void getdata(int l1, int b1, int h1)
    {
        this->l1 = l1;
        this->b1 = b1;
        this->h1 = h1;
        volume(l1,b1,h1);
    }
    void getdata(int r2, int h2)
    {
        this->r2 = r2;
        this->h2 = h2;
        volume(r2,h2);
    }
    Volume(/* args */) {}
    ~Volume() {}
};

int main()
{
    Volume v1;
    v1.getdata(10);
    v1.getdata(10,20);
    v1.getdata(10,20,30);
    return 0;
}
