#include <iostream>
#include <math.h>
using namespace std;
class rectangle
{
    float l;
    float b;

public:
    void getdata(float a, float c)
    {
        l = a;
        b = c;
    }
    void display()
    {
        cout << "The converted value are: " << endl;
        cout << l << endl
             << b << endl;
    }
};
class polar
{
    float r;
    float thetha;

public:
    void getData()
    {
        cout << "Enter the R value: " << endl;
        cin >> r;
        cout << "Enter the Thetha value: " << endl;
        cin >> thetha;
    }
    operator rectangle()
    {
        float x = r*cos(thetha);
        float y = r*sin(thetha);
        rectangle temp;
        temp.getdata(x,y);
        return temp;
    }
};
int main(){
    rectangle r1;
    polar p1;
    p1.getData();
    r1 = p1;
    r1.display();
    return 0;
}