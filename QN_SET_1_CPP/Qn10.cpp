#include <iostream>
#include <cstring>
using namespace std;
class Employee
{
    string name;
    int id;

public:
    void getdata()
    {
        cout << "Enter your name : " << endl;
        cin >> name;
        cout << endl;
        cout << "Enter your employee id : ";
        cin >> id;
    }
    void putdata()
    {
        cout << "Employeee name : " << name << endl;
        cout << "Employerr id : " << id << endl;
    }
};
class Manager : public Employee
{
    string department;

public:
    void getdata()
    {
        Employee::getdata();
        cout << "Enter your department : ";
        cin >> department;
    }
    void putdata()
    {
        Employee::putdata();
        cout << "Manager department : " << department << endl;
    }
};
class ComputerOperator : public Employee
{
    string typing_speed;

public:
    void getdata()
    {
        Employee::getdata();
        cout << "Enter your typing speed : " << endl;
        cin >> typing_speed;
    }
    void putdata()
    {
        Employee::putdata();
        cout << "Computer operator typing speed : " << typing_speed << endl;
    }
};
int main()
{
    Manager a;
    a.getdata();
    a.putdata();
    ComputerOperator c;
    c.getdata();
    c.putdata();
    return 0;
}