// Write a function that creates a vector of user-given size M using new operator.
#define null 0
#include <bits/stdc++.h>
#include <conio.h>
using namespace std;
void main()
{
    void memory(int);
    cout << "Enter Memory M you Want to create:-";
    int size;
    cin >> size;
    memory(size);
    getch();
}

// MEMORY function
void memory(int s)
{
    int *m = new int[s];
    if (m != null)
    {
        cout << "\nWe are Successfull";
        cout << "\n\n\n\n\tNow You Want to Delete This Created Memory";
        cout << "\n\n\tEnter Y or y for Deleting else anything:-";
        char ch;
        cin >> ch;
        if (ch == 'y' || ch == 'Y')
        {
            delete[] m;
            cout << "\n\n\n\tCreated Memory is Delete";
        }
        else
            cout << "\n\n\tOK, your Memory is Safe";
    }
    else
        cout << "\nWe are UN-Successfull";
}