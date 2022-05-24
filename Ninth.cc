// 9.WAP to display Fibonacci series up to n times entered by user.

#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int n1 = -1, n2 = 1, n3, n4;
    cout << "\nEnter a Number: ";
    cin >> n3;
    cout << "\n\nFibonacci series up to " << n3 << " times is: ";
    for (int i = 0; i < n3; i++)
    {
        /* code */
        n4 = n1 + n2;
        n1 = n2;
        n2 = n4;
        cout << n4 << " ";
    }

    getch();
    return 0;
}