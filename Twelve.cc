// 12.WAP to declare a pointer to array and display the elements.

//🤣👌👍

#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int(*p)[3] = new int[3][3];
    int *ptr;
    cout << "\nEnter 3X3 Matrix: ";
    for (int i = 0; i < 3; i++)
    {
        /* code */
        ptr = p[i];
        for (int j = 0; j < 3; j++)
        {
            /* code */
            cin >> *(ptr + j);
        }
    }
    cout << "\nYou Have Entered: \n";
    for (int i = 0; i < 3; i++)
    {
        /* code */
        ptr = p[i];
        for (int j = 0; j < 3; j++)
        {
            /* code */
            cout << *(ptr + j) << "\t";
        }
        cout << endl;
    }

    getch();
    return 0;
}