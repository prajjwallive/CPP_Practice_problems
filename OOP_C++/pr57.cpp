// Copy constructer in C++
#include <iostream>
using namespace std;
class A
{
    int x;

public:
    A()
    {
    }
    A(int a)
    {
        x = a;
    }
    A(A &o1)
    {
        x = o1.x;
    }
    void display()
    {
        cout << x << endl;
    }
};
int main()
{
    A object1(7);
    A object2 = object1;
    object1.display();
    object2.display();
    return 0;
}
