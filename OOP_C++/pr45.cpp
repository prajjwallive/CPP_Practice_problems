// C++ program to understand the polymorphism (Run Time Polymorphism and Compile Time Polymorphism)
#include <iostream>
using namespace std;
class utech
{
    int x;
    int y;

public:
    virtual void fun()
    {
        cout << "I am parent tester";
    }
};
class utech_second : public utech
{
public:
    void fun()
    {
        cout << " I am child tester";
    }
};
int main(){
utech *a;
utech_second object;
a = &object;
a->fun();
return 0;
}