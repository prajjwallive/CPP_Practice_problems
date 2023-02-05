// namespaces and their different capabilities in the classes
#include <iostream>
using namespace std;
namespace ns
{
    void display();
    class avi
    {
    public:
        void display();
    };
}
void ns::display()
{
    cout << " We are working outside the box\n";
}
void ns::avi::display()
{
    cout << " We have similar name but we are differ\n";
}
int main()
{
    ns::avi obj;
    ns::display(); // This is function of the namespace so it is not an object 
    obj.display(); // It is inside the class --> and it need to be defined as object
    return 0;
}