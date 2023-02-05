// Example of Aggrigation In the program, Aggregation helps to represent HAS-A relation between the objects of 2 individual classes. Aggregation is more restrictive compared to the association. Aggregation helps in making your program code more readable and understandable to represent the relation. Using a pointer variable, you can refer to the object of one class in the container class object.
#include <iostream>
#include <string.h>
using namespace std;
class Tech
{
public:
    int house;
    string city, state;
    Tech(int house_no, string city, string state)
    {
        this->house = house_no;
        this->city = city;
        this->state = state;
    }
};
class Person
{
private:
    Tech *address;

public:
    string name;
    Person(string name, Tech *address)
    {
        this->name = name;
        this->address = address;
    }
    void display()
    {
        cout << name << " "
             << " " << address->house << " " << address->city << " " << address->state << endl;
    }
};
int main(void)
{
    Tech add1 = Tech(112, "Bandra", "Mumbai");
    Tech add2 = Tech(222, "Jahanpanah", "New Delhi");
    Person p1 = Person("Raj", &add1);
    Person p2 = Person("John", &add2);
    cout << "Name of the Person"
         << " and "
         << "Address" << endl
         << endl;
    p1.display();
    p2.display();
    return 0;
}