// WAP to access static member variables and static member functions
#include <iostream>
#include <conio.h>
#include <conio.h>
using namespace std;

class testing
{
private:
    /* data */
    static int num1;
    int count;

public:
    void Set_count()
    {
        count = ++num1;
    }
    static void show_no()
    {
        cout << "\n\nNumber Of Object : " << num1;
    }
    void show_count()
    {
        cout << "\nObject No. : " << count;
    }
    testing(/* args */) {}
    ~testing() {}
};
int testing::num1;

int main()
{
    testing t1, t2;
    t1.Set_count();
    t2.Set_count();
    testing::show_no();

    testing t3;
    t3.Set_count();
    testing::show_no();

    t1.show_count();
    t2.show_count();
    t3.show_count();
    getch();
    return 0;
}
