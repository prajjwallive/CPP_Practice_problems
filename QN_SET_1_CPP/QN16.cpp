// Program 16: Write a program to swap variables of two classes using friend
// function.
#include <iostream>
using namespace std;
class c2;
class c1
{
    int x;

public:
    c1()
    {
        x = 2;
    }
    friend void swapper(c1 a, c2 b);
};
class c2
{
    int y;

public:
    c2()
    {
        y = 10;
    }
    friend void swapper(c1 a, c2 b);
};
void swapper(c1 a,c2 b)
{
    int temp;
    temp = a.x;
    a.x = b.y;
    b.y = temp;
    cout << "Value after swapping is: " << a.x << endl
         << b.y << endl;
}
int main()
{
    c1 o1;
    c2 o2;
    swapper(o1,o2);
}