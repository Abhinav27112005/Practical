// 6.WAP to print factorial of a given number.

#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int num;
    unsigned long long int sum = 1;
    cout << "\nEnter a Number: ";
    cin >> num;
    for (int i = 1; i <= num; i++)
    {
        /* code */
        sum = sum * i;
    }
    if (num == 0)
    {
        /* code */
        sum = 1;
    }
    if (num < 0)
    {
        /* code */
        cout << "\nFACTORIAL CANNOT BE FOUND!!";
    }
    cout << "\n\nFactorial of " << num << " is: " << sum;

    getch();
    return 0;
}