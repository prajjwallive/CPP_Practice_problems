// Working with class and string and int
#include <bits/stdc++.h> // This is the header file which contains almost all the std lib functions of C++
using namespace std;
class pr7
{
public:
    string name = " \t Abhishek Sharma \t ";
    int let = 'x';
    float y = 0.07565;
    void func()
    {
        cout << " My name is :" << name << let << y;
    }
};
int main()
{
    pr7 obj;
    obj.func();
    return 0;
}