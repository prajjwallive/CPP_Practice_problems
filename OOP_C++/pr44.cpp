// C++ program to study the virtual base class
#include <iostream>
using namespace std;
class parent
{
    int x;
    int y;

public:
    parent()
    {
        x = 2;
        y = 5;
    }
    void fun1()
    {
        cout << "C++ is Fun with sum:" << endl
             << x + y << endl;
    }
};
class child_first : public virtual parent // use of virtual base class is shown here
{
    int x;
    int y;

public:
    child_first()
    {
        x = 2;
        y = 4;
    }
    void fun()
    {
        cout << "C++ is fun with product:" << endl
             << x * y << endl;
    }
};
class child_second : virtual public parent
{
    int x;
    int y;

public:
    child_second()
    {
        x = 8;
        y = 4;
    }
    void fun()
    {
        cout << "C++ is fun with difference:" << endl
             << x - y << endl;
    }
};
class grand_child : public child_first, public child_second
{
};

int main()
{
    grand_child o1;
    o1.fun1();
    parent::o1.fun();
    return 0;
}