// Program 22: Write a program to find the sum and difference of any two
// complex numbers by overloading ‘+’ and ‘-‘ operator.
#include <iostream>
using namespace std;
class overloader
{
    int x;
    int y;

public:
    overloader()
    {
        x = 7;
        y = 8;
    }
    void operator+(overloader o2)
    {
        x += o2.x;
        y += o2.y;
        cout << "sum of two object is:" << endl;
        cout << " x = " << x << endl;
        cout << " y = " << y << endl;
    }
    void operator-(overloader o2)
    {
        x -= o2.x;
        y -= o2.y;
        cout << "Difference of two object is:" << endl;
        cout << " x = " << x << endl;
        cout << " y = " << y << endl;
    }
};
int main()
{
    overloader m1, m2;
    m1 + m2;
    m1 - m2;
    return 0;
}