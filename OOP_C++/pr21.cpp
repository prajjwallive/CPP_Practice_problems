// Continue and break statement in C++
#include <iostream>
using namespace std;
int main()
{
    int i;
    // for (i = 0; i <= 10; i++)
    // {
    //     cout << i << endl;
    //     if (i == 7)
    //     {
    //         break;
    //     }
    // }
    // Above is the useage of the break statement
    for (i = 1; i <= 100; i++)
    {
        if (i % 2 == 0)
        {
            continue;
        }
        cout << i << endl;
    }
    return 0;
}