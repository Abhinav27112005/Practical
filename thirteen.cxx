// 13.WAP to implement this pointer

#include <iostream>
#include <conio.h>
#include <cstring>
using namespace std;
class Person
{
private:
    /* data */
    char name[20];
    float age;

public:
    Person(const char *s, float age)
    {
        strcpy(name, s);
        this->age = age;
    }
    Person &greater(Person &x)
    {
        if (x.age >= age)
        {
            /* code */
            return x;
        }
        else
            return *this;
    }

    void display(void)
    {
        cout << "\nName:: " << name << "\n"
             << " Age: " << age << "\n";
    }
    Person(/* args */) {}
    ~Person() {}
};
// Person &Person::greater(Person &x)
// {
//     if (x.age >= age)
//     {
//         /* code */
//         return x;
//     }
//     else
//         return *this;
// }

int main()
{
    Person p1("Abhinav", 17), p2("Jalal-udin-khilji", 209), p3("Gabbar", 100);
    Person p = p1.greater(p3);
    cout << "\nElder Person is: \n";
    p.display();

    p = p1.greater(p2);
    cout << "\nElder Person is: \n";
    p.display();

    getch();
    return 0;
}