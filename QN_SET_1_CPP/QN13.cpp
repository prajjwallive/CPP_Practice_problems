// Program 13: Write a program to add two complex numbers using the concept
// of constructor.
#include <iostream>
using namespace std;
class complex
{
    int real;
    int image;

public:
    complex(int r = 4, int i = 7)
    {
        real = r;
        image = i;
    }
    void sum(complex o1, complex o2)
    {
        cout << "Sum of two complex number is: " << o1.real + o2.real << "+i" << o1.image + o2.image;
    }
};
int main()
{
    complex hunter, hunter1(5, 6), hunter3;
    hunter3.sum(hunter, hunter1);
    return 0;
}