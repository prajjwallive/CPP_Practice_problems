// Q. Write a program to add any two private numbers of two different classes
//  using friend function.
#include <iostream>
using namespace std;
class A
{
    int x;

public:
    A(int a)
    {
        x = a;
    }
    friend void add(A o1, B o2);
};

class B
{
    int y;

public:
    B(int b)
    {
        y = b;
    }
    friend void add(A o1, B o2);
};

void add(A o1, B o2)
{
    cout << "Sum of two number is: " << o1.x + o2.y << endl;
}

int main()
{
    A o1(5);
    B o2(6);
    void add(o1, o2);
    return 0;
}