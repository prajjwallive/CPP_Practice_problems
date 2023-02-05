// Write a function using reference variables as arguements to swap the value of a pairs of integers
#include <bits/stdc++.h>
using namespace std;
void swap(int &x, int &y);
int main()
{
    int a = 1, b = 2;
    cout << "Value Before swapping Are:"
         << "a =" << a << "b = " << b << endl;
    swap(a, b);
    cout << "Value Before swapping Are:"
         << "a =" << a << "b = " << b << endl;
    return 0;
}
void swap(int &x, int &y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}