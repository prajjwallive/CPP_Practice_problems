// working with namespaces
#include <iostream>
using namespace std;
namespace ns1
{
    int value()
    {

        return 5;
    }
    int rem()
    {
        int x, y;
        x = 5, y = 6;
        return (x * y);
    }
}
int main()
{
    cout << ns1::value() << '\n';
    cout << ns1:: rem() << " This is working fine \n" << " We are beginner at C++";
    // It is working like a function
    return 0;
}