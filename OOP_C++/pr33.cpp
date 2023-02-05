// Inline function with nesting of function in c++
#include <iostream>
using namespace std;
class prajjwal
{
    int a, b;
    string user;
    void name()
    {
        cout << "Enter your name " << endl;
        cin >> user;
    }

public:
    void sum(int a, int b)
    {
        cout << "The Sum of two number is : " << a + b << endl;
        name(); // Here I have used the nesting of the function
    }
    void display();
};
void prajjwal ::display()
{
    cout << " Your name is: " << user << endl;
}

int main()
{
    prajjwal n1;
    // n1.name(); you cann't call this function because it is in private class so it can be only used by its data member
    n1.sum(4, 5);
    n1.display();
    return 0;
}