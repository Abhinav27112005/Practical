// 19.WAP to format output using manipulators.
/*
    Manupilators
    1)endl
    2)Setbase()     //8,16,10
    3)setw()
    4)setfill()
    5)setprecisions()
    5)ends
    6)ws
    7)flush()

*/
#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;
int main()
{
    int a;
    float b;
    char c;
    double d;
    cout << "\nEnter a Number: ";
    cin >> a;
    cout << "\nHexadecimal Number of " << a << " is: " << setbase(16);
    cout << "\nOctal Number of " << a << " is: " << setbase(8);
    cout << "\n\nEnter a Decimal Value: ";
    cin >> b;
    cout << "\nPrecision of 3 is: " << setprecision(3);
    getch();
    return 0;
}