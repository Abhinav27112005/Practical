/*WAP to input integer ,float, char and string using c in and display using c out 
statement
*/

#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;
int main()
{
    int in;
    char ch;
    string str;
    float B;

    cout<<"\nEnter a Integer Value: ";
    cin>>in;
    cout<<"\nEnter a Character Value: ";
    cin>>ch;
    fflush(stdin);
    cout<<"\nEnter a String: ";
    getline(cin,str);
    cout<<"\nEnter a Decimal Value: ";
    cin>>B;

    //Output
    cout<<"\nYou have Entered: ";
    cout<<"\nInteger Value: "<<in<<"\nCharacter Value: "<<ch<<"\nDeciaml Value: "<<B<<"\nString: "<<str;
    getch();
    return 0;
}