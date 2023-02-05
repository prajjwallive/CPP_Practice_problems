// Class can also be declared inside namespace and defined outside namespace using following syntax
#include <iostream>
using namespace std;
namespace ns
{
    class c1;
}
class ns::c1
{
public:
    void f1()
    {
        cout << " We are testing the different declaration of the classes\n";
    }
};
int main()
{
    ns::c1 sharma;
    sharma.f1();
    return 0;
}