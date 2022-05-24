// 7.WAP to display whether a number is Palindrome or not.

#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int num1, temp, result = 0;
    cout << "\nEnter a Number: ";
    cin >> num1;
    temp = num1;
    while (num1)
    {
        /* code */
        result = result * 10 + (num1 % 10);
        num1 = num1 / 10;
    }
    if (temp == result)
    {
        /* code */
        cout << "\n\n"
             << temp << " is Palindrome!!";
    }
    else
        cout << "\n\n"
             << temp << " is Not Palindrome !!";

    getch();
    return 0;
}
