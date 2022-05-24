// 8.WAP to display whether a number is Armstrong or not.

#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int num1, result = 0, num2, temp;
    cout << "\n\nEnter a Number: ";
    cin >> num1;
    temp = num1;
    while (num1)
    {
        /* code */
        num2 = num1 % 10;
        result = result + (num2 * num2 * num2);
        num1 = num1 / 10;
    }
    if (temp == result)
    {
        cout << "\n\nNumber is Armstrong";
    }
    else
        cout << "\nNumber is Not a Armstrong Number!!";

    getch();
    return 0;
}