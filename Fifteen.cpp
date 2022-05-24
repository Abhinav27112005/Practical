// 15.WAP to show hierarchical inheritance.

#include <iostream>
#include <conio.h>

using namespace std;

class Number
{
private:
    int number;

public:
    void getdata()
    {
        cout << "\nEnter a Number: ";
        cin >> number;
    }
    inline int getnumber()
    {
        return number;
    }
    Number() {}
    ~Number() {}
};
class Square : public Number
{
public:
    int square()
    {
        return (getnumber() * getnumber());
    }
    Square(/* args */) {}
    ~Square() {}
};
class Cube : public Number
{
public:
    int cube()
    {
        return (getnumber() * getnumber() * getnumber());
    }
    Cube(/* args */) {}
    ~Cube() {}
};
int main()
{
    Cube c1;
    Square s1;
    s1.getdata();
    cout << "\nSquare of " << s1.getnumber() << " is: " << s1.square();
    c1.getdata();
    cout << "\nCube of " << c1.getnumber() << " is: " << c1.cube();
    getch();
    return 0;
}