// Program 19: Write a program to find the area of a triangle (when its sides are
// given) using the concept of overloaded constructor.
#include <iostream>
#include <cmath>
using namespace std;
class traingle
{
    float s;
    float a;
    int b;
    int c;
    int d;

public:
    traingle()
    {
        d = 12;
        b = 24;
        c = 22;
    }
    traingle(int x, int y, int z)
    {
        d = x;
        b = y;
        c = z;
    }
    void area()
    {
        s = (d + b + c) / 2;
        a = sqrt(s * (s - d) * (s - b) * (s - c));
        cout << " Area: " << a << endl;
        }
};
int main()
{
    traingle t1;
    traingle t3(6, 7, 8);
    t1.area();
    t3.area();
    return 0;
}