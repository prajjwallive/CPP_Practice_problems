// Working with friend function --> Extraction process is not completed properly I am having issue here
#include <iostream>
#include <cstring>
using namespace std;
class student
{
    string name;
    int roll_no;
    char address[30];
    friend class extraction;

public:
    void display()
    {
        cout << "Enter the following details" << endl;
        cout << "Name" << endl;
        getline(cin, name);
        cout << "Roll_no" << endl;
        cin >> roll_no;
        cout << "Address" << endl;
        cin >> address;
    }
};
class extraction
{
public:

    student s1;
    void ex()
    {
        if (strcmp(strlwr(s1.address), "kathmandu") == 0)
            ;
        {
            cout << "From extraction of data" << endl;
            cout << s1.name << endl;
            cout << s1.roll_no << endl;
            cout << s1.address << endl;
        }
    }
    void before()
    {
        cout << s1.name << endl;
        cout << s1.roll_no << endl;
        cout << s1.address << endl;
    }
};
int main()
{
    student s1;
    s1.display();
    extraction e1;
    e1.ex();
    return 0;
}
