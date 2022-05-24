// 11.WAP to implement inline and friend function.

#include <iostream>
#include <conio.h>
using namespace std;
class Practical
{
private:
    int a, b, c;

public:
    void getdata()
    {
        cout << "\nEnter Two Numbers: ";
        cin >> a >> b;
    }
    void Add()
    {
        cout << a << " + " << b << " = " << c;
    }
    friend Practical Add(Practical &);
    Practical(Practical &p1)
    {
        a = p1.a;
        b = p1.b;
        c = p1.c;
    }
    Practical() {}
    ~Practical() {}
};
inline Practical Add(Practical &P1)
{
    Practical P2(P1);
    P2.c = P1.a + P1.b;
    return (P2);
}
int main()
{
    Practical p1, p2;
    p1.getdata();
    p2 = Add(p1);
    p2.Add();

    getch();
    return 0;
}
