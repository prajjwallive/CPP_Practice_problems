// C++ Program to find the sum of two complex number
#include <iostream>
using namespace std;
class prajjwal
{
    int a, b;

public:
    void Get_Data(int v1, int v2)
    {
        a = v1;
        b = v2;
    }
    void Sum_Data(prajjwal o1, prajjwal o2)
    {
        a = o1.a + o2.a;
        b = o1.b + o2.b;
    }
    void Display_Data(void)
    {
        cout << a << "+" << b << "i" << endl;
    }
};

int main()
{
    prajjwal c1, c2, c3;
    c1.Get_Data(1, 2);
    c1.Display_Data();

    c2.Get_Data(2,3);
    c2.Display_Data();

    cout<<"Sum"<<endl;
    c3.Sum_Data(c1,c2);
    c3.Display_Data();
    return 0;
}