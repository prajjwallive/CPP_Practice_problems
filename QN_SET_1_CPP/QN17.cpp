// Program 17: Write a program to add two complex numbers using friend
// function.
#include <iostream>
using namespace std;
class complex
{
    int real;
    int imag;

public:
    void input()
    {
        cout << "Enter the real and imaginary part of complex number: " << endl;
        cin >> real;
        cin >> imag;
    }
    friend void add(complex o1, complex o2);
};
void add(complex o1, complex o2)
{
    o1.real += o2.real;
    o1.imag += o2.imag;
    cout << "The sum of two complex number is: " << endl;
    cout << o1.real << "+i" << o1.imag << endl;
}
int main()
{
    complex a1, a2;
    a1.input();
    a2.input();
    add(a1, a2);
    return 0;
}