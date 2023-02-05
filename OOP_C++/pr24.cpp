#include <iostream>
using namespace std;
// We are learning the inline function
inline int product(int a, int b)
{
    return a * b;
}
int main()
{
    int a, b;
    cout << " Enter the two number " << endl;
    cin >> a >> b;
    cout << " The Product of the number is : " << product(a, b) << endl;
    return 0;
}
// It saves the time for the execution of the short line of code 
// Inline replaces the function with the code