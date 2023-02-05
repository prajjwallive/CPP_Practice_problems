// Run time polymorphism// Multi Level Inheritance // virtual function
#include <iostream>
using namespace std;
class A
{
public:
    virtual void display()
    {
        cout << "I am class A" << endl;
    }
};
class B :  public A
{
public:
    void display()
    {
        cout << "I am class B" << endl;
    }
};
class C :  public B
{
public:
    void display()
    {
        cout << "I am class C" << endl;
    }
};

int main()
{
    A *ptr;
    B objb;
    C objc;
    ptr = &objb;
    ptr->display();
    ptr = &objc;
    ptr->display();
    return 0;
}
