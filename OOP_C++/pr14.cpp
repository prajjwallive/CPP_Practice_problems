/* Write a program to print the following output using for loops
1
22
333
4444
55555
*/
// #include <bits/stdc++.h>
#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int i, j;
    for (i = 1; i <= 5; i++)
    {
        for (j = i; 1 <= j; j--)
        {
            cout << i << '\t';
        }
        cout << endl;
    }
    getch();
    return 0;
}