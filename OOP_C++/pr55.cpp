// Dynamic Constructor in c++
#include <iostream>
using namespace std;
class A
{
    int *ptr;

public:
    A(int a)
    {
        ptr = new int;
        ptr = &a;
    }
    void display()
    {
        cout << " I dynamically created this constructor and have value: " << *ptr << endl;
    }

};
int main()
{
    A o1(7);
    o1.display();
    return 0;
}
