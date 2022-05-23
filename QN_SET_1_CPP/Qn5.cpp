// Program 5: Create a class called Mountain with data members name, height,
// location, a constructor initializes the members to the values passed to it as
// parameters, a function called CmpHeight( ) to compare two objects and
// DisplayInf( ) to display the information of Mountain. In main, create two objects
// of the class mountain and print the information of the mountain which is of
// greatest height.
#include <iostream>
using namespace std;
class mountain
{
    string name;
    float height;
    string location;

public:
    mountain(string n="0", float h=0, string l="0")
    {
        name = n;
        height = h;
        location = l;
    }
    void display_inf(mountain o1, mountain o2)
    {
        cout << "First Mountain" << endl;
        cout << "Name:" << o1.name << endl;
        cout << "Height:" << o1.height << endl;
        cout << "Location" << o1.location << endl;
        cout << "_______________________________________" << endl;
        cout << "Second Mountain" << endl;
        cout << "Name:" << o2.name << endl;
        cout << "Height:" << o2.height << endl;
        cout << "Location" << o2.location << endl;
    }
    void compare(mountain o1, mountain o2)
    {
        if (o1.height > o2.height)
        {
            cout << o1.name << " is the bigger mountain" << endl;
        }
        else
        {
            cout << o2.name << " is the bigger mountain" << endl;
        }
    }
};
int main()
{
    mountain m1("Mt.Everest",8848.48,"Solukhumbhu"), m2("Mt.Lotse",5555.5,"Nepal"), c1;
    c1.display_inf(m1,m2);
    c1.compare(m1,m2);
    return 0;
}