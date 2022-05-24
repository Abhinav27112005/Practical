// .WAP to create objects of class.

#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;

class Student
{
private:
    string name;
    int sem;

public:
    void getdata()
    {
        fflush(stdin);
        cout << "\nEnter Your Name: ";
        getline(cin, name);
        cout << "\nEnter Your Semester: ";
        cin >> sem;
    }
    void show_data()
    {
        cout << "\n\nStudent Details: \n"
             << "\nName of Student: " << name << "\nSemester: " << sem;
    }
    Student() {}
    ~Student() {}
};

int main()
{
    Student s1, s2;
    s1.getdata();
    s2.getdata();
    s1.show_data();
    s2.show_data();
    getch();
    return 0;
}