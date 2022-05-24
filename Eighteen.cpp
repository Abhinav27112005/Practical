// Write a Program to implement virtual function

#include <iostream>
#include <conio.h>
using namespace std;

class Base // Base class
{
private:
    /* data */
    int side; // side is private instance data member of a datatype int

public:
    void getdata()
    {
        cout << "\nEnter the side of a square: ";
        cin >> side;
    }
    virtual int Area() // Area of Square
    {
        int area = side * side;
        return area;
    }
    void showdata()
    {
        cout << "Area of Square is: " << Area();
    }
    Base(int side)
    {
        this->side = side;
    }
    Base() {}
    ~Base() {}
};
class Derived : Base
{
private:
    /* data */
    int length, breadth;

public:
    void getdata()
    {
        cout << "\nEnter the Length of a Rectangle: ";
        cin >> length;
        cout << "\nEnter the Breadth of a Rectangle: ";
        cin >> breadth;
    }
    int Area()
    {
        int area = length * breadth;
        return area;
    }
    void showdata()
    {
        cout << "Area of Rectangle is: " << Area();
    }
    Derived(/* args */) {}
    ~Derived() {}
};

int main()
{
    Base *B, B1;
    Derived *D, D1;
    B->getdata();
    B->showdata();

    D->getdata();
    D->showdata();

    return 0;
}