// Inheritance mode in C++
#include <iostream>
using namespace std;
class utech
{
protected:
    int a, b;
    utech()
    {
        a = 1, b = 2;
    }
};
class utech1 : public utech
{
public:
    void display()
    {
        cout << "The sum is:" << (a + b) << endl;
    }
};
int main()
{
    utech1 obj1;
    obj1.display();
    return 0;
}