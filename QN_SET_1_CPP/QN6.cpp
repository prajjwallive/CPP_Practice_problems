// Program 6: Write a program to input two vectors coordinates from a base class
// named ‘Base’. Class ‘Derived’ inherits all the properties of class Base. Class
// ‘Derived’ must contain a function named add_vector( ) that add the two vectors
// input from the base class and finally display the result from a function
// display() that is friend with the base class.
#include <iostream>
using namespace std;
class derived;
class base
{
public:
    int x;
    int y;
    void input()
    {
        cout << "Enter the coordinate of Vector x-axis and y-axis" << endl;
        cin >> x;
        cin >> y;
    }
    friend void display(base);
};
class derived : public base
{
public:
    void add_vector(base &o1, base &o2)
    {
        o1.input();
        o2.input();
        o1.x += o2.x;
        o1.y += o2.y;
    }
};
void display(base o1)
{
    cout << "Sum of two vector is:" << o1.x << "i+" << o1.y << "j" << endl;
}

int main()
{
    base o1, o2, o3;
    derived obj;
    obj.add_vector(o1, o2);
    display(o1);
    return 0;
}