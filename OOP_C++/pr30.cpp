// Use of Friend Function with Constructor Usgage
#include <iostream>
using namespace std;
class student
{
    int a;
    int b;
    void display()
    {
        cout << "I can be only called by the friend function" << endl;
    }

public:
    friend class frn_func;
    student()
    {
        a = 1;
        b = 3;
        cout << " I am default Constructor " << endl;
        cout << a << endl
             << b << endl;
    }
    student(int x)
    {
        a = x;
        cout << "I go this value from parameterized constructor " << a << endl;
        cout << " Sum " << a + 4 << endl;
    }
};
class frn_func
{
public:
    void output()
    {
        cout << " I will be using the private data of my friend function" << endl;
        student s;
        s.display();
    }
};
int main()
{
    int a, b;
    student s1;
    student(2);
    frn_func f1;
    f1.output();
    return 0;
}