#include <iostream>
#include <cstring>
using namespace std;
class Employee
{
public:
    char name[8];
    char company[9];
    int age;

    void show()
    {
        cout << "name-" << name << endl;
        cout << "company-" << company << endl;
        cout << "age-" << age << endl;
    }
};

int main()
{
    Employee employee1;
    employee1.name={'s','m','r','i','t','i'};
    employee1.age = 19;
    employee1.show();

    return 0;
}
