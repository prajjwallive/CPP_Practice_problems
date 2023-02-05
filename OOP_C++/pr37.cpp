// Dynamic memory allocation in C++
#include <iostream>
using namespace std;
int main()
{
    int a, i;
    int *ptr;
    cout << "How many number you want to enter" << endl;
    cin >> a;
    ptr = new int[a];
    if(ptr==NULL){
        cout <<"Memory Allocation Failed!"<<endl;
    }
    else{
        cout << "Memory allocated Successfully!"<<endl;
    }
    cout << "Start Entering the number" << endl;
    for (i = 0; i < a; i++)
    {
        cin >> ptr[i];
        cout << endl;
    }
    cout << "Your entered number is:" << endl;
    for (i = 0; i < a; i++)
    {
        cout << ptr[i] << endl;
    }
    delete[] ptr;
    return 0;
}