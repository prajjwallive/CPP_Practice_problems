// Operator Precedence order in C++
#include <iostream>
using namespace std;
int main()
{
    int a = 3, b = 4;
    int c;
    c = (((a * 5) + b) - 45) + 87;
    cout << c;
    return 0;
}