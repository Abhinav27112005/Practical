// 16.WAP to access private member variables of base class using pointers.
#include <iostream>
#include <conio.h>
using namespace std;

class Base
{
private:
    /* data */
    int data;

public:
    void getdata()
    {
        cout << "\nEnter a Number: ";
        cin >> data;
    }
    void showdata()
    {
        cout<<"\nYou have Entered: "<<data;
    }
    Base(/* args */) {
        data=0;
    }
    ~Base() {}
};
class Derived : public Base
{
private:
    /* data */
    int *ptr;
    Base b1;

public:
    Base& accessdata(int value)
    {
        ptr = (int *)&b1;
        *ptr=value;
        return b1;
    }

    Derived(/* args */):Base() {}
    ~Derived() {}
};
int main()
{
    Derived d1;
    Base b1;
    int value;


    d1.getdata();
    d1.showdata();


    cout<<"\nEnter another value: ";
    cin>>value;

    b1=d1.accessdata(value);
    b1.showdata();

    return 0;

}
