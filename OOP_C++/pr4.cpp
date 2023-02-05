// working with the namespace and classes
#include <iostream>
using namespace std;
namespace ns1
{
    class avi
    {
    public:
        void func()
        {
            cout << " \nWe are Learning about the classes \n ";
        }
        void value(){
            cout  << 5+6 << "\n" ;
        } 
        void multiple(){
            int x, y;
            x = 10 , y= 5;
            cout << "\n" << x*y << " \n This should work" ;
        }
    };
}
int main()
{
    ns1::avi obj;
    obj.value();
    obj.func();
    obj.multiple();
    return 0;
}