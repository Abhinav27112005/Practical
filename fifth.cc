/*
5.WAP to print list of prime numbers between any two entered values.
*/

#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int num1, num2, i, j, sno, gno, check = 0;

    cout << "\n\nEnter a Number: ";
    cin >> num1;
    cout << "\n\nEnter another Number between You want to find Prime Number: ";
    cin >> num2;
    sno = num1 < num2 ? num1 : num2;
    gno = num1 > num2 ? num1 : num2;

    for (i = sno; i < gno; i++)
    {
        /* code */
        for (j = 2; j < i; j++)
        {
            /* code */
            if (i % j == 0)
            {
                /* code */
                break;
            }
            else
            {
                continue;
            }
        }
        if (i == j)
        {
            /* code */
            check = 1 + check;
            if (check == 1)
            {
                /* code */
                cout << "\n\nPrime Numbers are: ";
            }
            cout << i << endl;
        }
    }
    if (check == 0)
    {
        /* code */
        cout << "\nPRIME NUMBER ARE NOT FOUND!!!";
    }

    getch();
    return 0;
}
