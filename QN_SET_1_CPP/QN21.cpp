// Program 21: Write a program to add two complex numbers. Your program
// should have three objects. Each object contains two attributes (ie. real and
// imaginary part). Now add each attribute and save them into third object
// separately. Use the concept of ‘+’ operator overloading.
#include <iostream>
using namespace std;

class complex
{
    int real;
    int imaginary;

public:
    complex()
    {
    }
    complex(int a, int b)
    {
        real = a;
        imaginary = b;
    }
    friend complex operator+(complex o1, complex o2);
    void display()
    {
        cout << "The sum of two complex number is: " << endl;
        cout << real << "+i" << imaginary << endl;
    }
};
complex operator+(complex o1, complex o2)
{
    complex temp;
    temp.real = o1.real + o2.real;
    temp.imaginary = o1.imaginary + o2.imaginary;
    return temp;
}
int main()
{
    complex hunter1(2, 3), hunter2(4, 5), hunter3;
    hunter3 = hunter1 + hunter2;
    hunter3.display();
    return 0;
}