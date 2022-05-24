// 10.WAP to demonstrate execution of constructor and destructor.

#include <iostream>
#include <conio.h>
using namespace std;

class test
{
private:
    static int count;

public:
    test()
    {
        count++;
        cout << "\nObject No. " << count << " is Created!";
    }
    ~test()
    {
        cout << "\nObject No. " << count << " is destroyed!";
        count--;
    }
};
int test::count = 0;
int main()
{

    cout << "\nInside the Main Function!!";
    cout << "\n\nCreating Object!!";
    test t1;
    {
        cout << "\nInside Temprory Block!";
        cout << "\n\nCreating two new Objects!!";
        test t2, t3;
        cout << "\n\nExiting from Temprorary Block!!";
    }
    cout << "\nLeaving The main function!!";
    getch();
    return 0;
}