// Working with class and string
#include <iostream>
using namespace std;
class pr7
{
public:
    string name;
    void func()
    {
        cout << " My name is:" << name;
    }
};
int main()
{
    pr7 obj;
    obj.name = "Prajjwal";
    obj.func();
    return 0;
}