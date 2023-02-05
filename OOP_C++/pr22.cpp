// Enumeration in C++
#include <iostream>
using namespace std;
int main()
{
    enum fruits
    {
        apple,
        banana,
        grapes,
    };
    int i;
    cout << " Enumerated Data is :" << endl;
    for (i = apple ; i <= grapes ; i++)
    {
        cout << i << endl;
    }
    return 0;
}