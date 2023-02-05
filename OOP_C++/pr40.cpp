#include <iostream>
using namespace std;
class Employee
{ // This is my base class for inheritance
public:
    int id;
    float salary;
    Employee()
    {
        id = 1;
        salary = 34;
    }
};

// Derived Class
// Creating a Programmer class derived from Employee base class
class Programmer : Employee
{
public:
    Programmer()
    {
        id;
        salary;
    }
    void display()
    {
        cout << "Your employee id is : " << id << endl;
        cout << " Your Salary is: " << salary << endl;
    }
    int languageCode = 9;
};
int main()
{
    Programmer skillF;
    // skillF.display();
    return 0;
}