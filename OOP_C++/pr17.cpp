// Type Casting the variable
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int a = 45;
    float b = 45.;
    cout << " The value of A is " << (float)a  << endl;
    cout << " The value of A is " << float(a) << endl;
    cout << " The value of b is " << (int)b << endl;
    cout << " The value of b is " << int(b) << endl;
    return 0;
}