// Program 15: Create classes called class1 and class2 with each having one
// private member. Add member function to set a value (say setvalue) on each
// class. Add one more function max( ) that is friendly to both classes. max( )
// function shound compare two private member of two classes and show
// maximum among them. Create one-one object of each class then set a value on
// them. Display the maximum number among them.
#include <iostream>
using namespace std;

class class2;
class class1
{
    int private_number1;

public:
    void setvalue()
    {
        cout << "Set first value: " << endl;
        cin >> private_number1;
    }
    friend int max(class1 o1, class2 o2);
};

class class2
{
    int private_number2;

public:
    void setvalue()
    {
        cout << "Set second value: " << endl;
        cin >> private_number2;
    }
    friend int max(class1 o1, class2 o2);
};
int max(class1 o1, class2 o2)
{
    int a;
    if (o1.private_number1 > o2.private_number2)
    {
        a = o1.private_number1;
    }
    else
    {
        a = o2.private_number2;
    }
    return a;
}
int main()
{
    class1 a1;
    class2 a2;
    a1.setvalue();
    a2.setvalue();
    int x = max(a1, a2);
    cout << x << " is the greatest number" << endl;
    return 0;
}