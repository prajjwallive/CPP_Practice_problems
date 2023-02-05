// cpp type conversion using the operator function
#include <iostream>
using namespace std;
class B
{
    float kilo_bytes;

public:
    void getdata(float x)
    {
        kilo_bytes = x;
    }
    void display()
    {
        cout << "The value equivalent to KB is:" << kilo_bytes << endl;
    }
};
class A
{
    float bytes;

public:
    void getdata(float x)
    {
        bytes = x;
    }
    operator B()
    {
        B temp;
        float kb = (bytes / 1024);
        temp.getdata(kb);
        return temp;
    }
};

int main()
{
    A obj1;
    obj1.getdata(2048);
    B obj2;
    obj2 = obj1;
    obj2.display();
    return 0;
}