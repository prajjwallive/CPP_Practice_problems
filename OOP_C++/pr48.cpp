// Cpp program to use the data conversion from class type to class type
#include <iostream>
using namespace std;
class a
{
    float bytes;

public:
    void getdata(float x)
    {
        bytes = x;
    }
    float giver()
    {
        return bytes;
    }
};

class b
{
    float kilo_bytes;

public:
    b() {}
    void display()
    {
        cout << "The equivalent of bytes to kilo bytes is: " << kilo_bytes << endl;
    }
    b(a obj)
    {
        kilo_bytes = (obj.giver() / 1024);
    }
};
int main()
{
    a obj1;
    obj1.getdata(20435358);
    b obj2;
    obj2 = obj1;
    obj2.display();
    return 0;
}