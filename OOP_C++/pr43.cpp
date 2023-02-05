//  CPP prgram to add the two complex number using friend function
#include <iostream>
using namespace std;
class c2;
class c1
{
    int real;
    int imag;

public:
    void input()
    {
        cout << "Enter first real part of complex number:" << endl;
        cin >> real;
        cout << "Enter first imaginary part of complex number:" << endl;
        cin >> imag;
    }
    friend void sum(c1, c2); 
};
class c2
{
    int real;
    int imag;

public:
    void input()
    {
        cout << "Enter second real part of complex number:" << endl;
        cin >> real;
        cout << "Enter second imaginary part of complex number:" << endl;
        cin >> imag;
    }
    friend void sum(c1,c2);
};
void sum(c1 obj1, c2 obj2){
    c2 obj_sum;
    obj_sum.real = obj1.real + obj2.real;
    obj_sum.imag = obj1.imag + obj2.imag;
    cout <<"Sum of two complex number is: "<<endl;
    cout <<obj_sum.real <<"+"<<obj_sum.imag<<"i"<<endl;
}

int main(){
    c1 obj1;
    c2 obj2;
    obj1.input();
    obj2.input();
    sum(obj1,obj2);
    return 0;
}