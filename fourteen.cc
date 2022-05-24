// 14.WAP to overload unary and binary operator.

#include <iostream>
#include <conio.h>
using namespace std;
class Practical
{
private:
    /* data */
    int a;

public:
    friend istream &operator>>(istream &, Practical &);
    friend ostream &operator<<(ostream &, Practical &);
    friend Practical &operator++(Practical &);
    Practical(/* args */) {}
    ~Practical() {}
};
istream &operator>>(istream &din, Practical &P1)
{
    din >> P1.a;
    return din;
}
ostream &operator<<(ostream &dout, Practical &P1)
{
    dout << P1.a;
    return dout;
}
Practical &operator++(Practical &P1)
{
    P1.a = ++P1.a;
    return P1;
}
int main()
{
    Practical P1, P2, P3;
    cout << "\nEnter Three Numbers: ";
    cin >> P1 >> P2 >> P3;
    cout << "\nYou Have Entered: ";
    cout << P1 << "\t" << P2 << "\t" << P3 << "\t";
    cout << "\nAfter Incrementing By One: ";
    P1 = ++P1;
    P2 = ++P2;
    P3 = ++P3;
    cout << P1 << "\t" << P2 << "\t" << P3;
    getch();
    return 0;
}