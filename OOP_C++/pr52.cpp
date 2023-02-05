
#include <iostream>
using namespace std;
class distance1
{
    float feet;
    float inch;
public:
    distance1()
    {
    }
    distance1(float x, float y)
    {
        feet = x;
        inch = y;
    }
    void display()
    {
        cout << "the value of distance after joining two object" << feet << endl
             << inch << endl;
    }
    friend distance1 operator+(distance1 ,distance1);
};
distance1 operator+(distance1 x, distance1 y)
{
    distance1 temp;
    temp.feet = y.feet + x.feet;
    temp.inch = y.inch + x.inch;
    return temp;
}
int main()
{
    distance1 d1(16.5, 18.5);
    distance1 d2(17.5, 14.5);
    distance1 d3;
    d3 = d1 + d2;
    d3.display();
    return 0;
}