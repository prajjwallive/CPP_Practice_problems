// This pointer in CPP
#include <iostream>
using namespace std;
class utech
{
    int a;

public:
    utech(int x)
    {
        a = x;
    }
    utech display(utech o1)
    {
        if (a > o1.a)
        {
            return *this;
        }
        else
        {
            return o1;
        }
    }
    void display(){
        cout << a <<endl;
    }
};
int main(){
  utech o4(5),o2(6);
  utech o3 = o4.display(o2);
  o3.display();
  return 0;
}