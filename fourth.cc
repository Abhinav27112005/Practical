/*4.WAP to print all even numbers in between two values entered by user using loop
statement.
*/

#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    int num1,num2,i,gno,sno;
    cout<<"\nEnter a Number: ";
    cin>>num1;
    cout<<"\nEnter another Number Between You Want to Print Even Numbers: ";
    cin>>num2;

    gno=num1>num2?num1:num2;
    sno=num1<num2?num1:num2;
    if(sno+1==gno)
    {
        cout<<"\nNumber Not Found ERROR!!";
    }
    else{

    cout<<"\nEven Number Between These Two are: \n";
    for(i=sno+1;i<gno;i++)
        if(i%2==0)
        {
            cout<<i<<endl;
        }
        else{
            continue;
        }
    }
    getch();
    return 0;
}
