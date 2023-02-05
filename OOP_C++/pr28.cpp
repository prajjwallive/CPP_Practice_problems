// working with the access modifiers in classes
#include <iostream>
using namespace std;
class prajjwal
{
    int a;
    int b;

protected:
    int c = 2, d = 4;
    void sum()
    {
        cout << "The Sum of c and d are:" << c + d << endl;
    }

public:
    void pub()
    {
        cout << " Hello I am public function" << endl;
    }
    class babies
    {
    public:
        void child_func()
        {
            cout << " I am child class and I am using protected data" << endl;
            prajjwal p1;
            p1.sum();
        }
    };
};
int main()
{
    prajjwal pr;
    pr.pub();
    // pr.sum(); 
    prajjwal::babies b1;
    b1.child_func();
    return 0;
}