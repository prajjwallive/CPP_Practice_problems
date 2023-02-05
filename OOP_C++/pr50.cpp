#include <iostream>
using namespace std;
template <class T>
void swapings(T &a, T &b)
{
    T temp;
    temp = a;
    a = b;
    b = temp;
}
int main()
{
    int a1 = 4, a2 = 9;
    float b1 = 9.5, b2 = 1.7;
    char c1 = 'X', c2 = 'Y';
    cout << "before swapping" << endl;
    cout << "a1 :" << a1 << "   a2 :" << a2 << endl;
    cout << "b1 :" << b1 << "   b2 :" << b2 << endl;
    cout << "c1 :" << c1 << "   c2 :" << c2 << endl;
    swapings(a1, a2);
    swapings(b1, b2);
    swapings(c1, c2);
    cout << "After swapping " << endl;
    cout << "a1 :" << a1 << "   a2 :" << a2 << endl;
    cout << "b1 :" << b1 << "   b2 :" << b2 << endl;
    cout << "c1 :" << c1 << "   c2 :" << c2 << endl;
    return 0;
}