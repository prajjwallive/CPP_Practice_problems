// pure virtual function && abstract class
#include <iostream>
using namespace std;
class a
{
public:
    virtual void sum() = 0;
};
class b : public a
{
public:
    void sum()
    {
        cout << "I am the product of abstract class" << endl;
    }
};

int main()
{
    a *ptr;
    b o1;
    ptr = &o1;
    ptr->sum();
    return 0;
}