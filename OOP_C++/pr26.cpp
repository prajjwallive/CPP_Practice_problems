// Function overloading
#include <iostream>
using namespace std;
int sum(int a, int b)
{
    cout << " First function is used" << endl;
    return a + b;
}
int sum(int a, int b, int c)
{
    cout << " Second function is used" << endl;
    return a + b + c;
}
int main()
{
    cout << " The sum of 5 and 6 is " << sum(5, 6) << endl;
    cout << " The sum of 3 , 4 and 5 is " << sum(3, 4, 5) << endl;
    return 0;
}