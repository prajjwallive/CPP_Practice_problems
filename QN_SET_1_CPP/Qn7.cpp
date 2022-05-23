// Program 7: Create a class called Employee with data member Code, Name,
// Address and Salary. Create a constructor to initialize the member of the class.
// Also create another constructor so that we can create an object from another
// object. Define member function display( ) to display the information of the
// class.
#include <iostream>
using namespace std;
class Employee
{
    int code;
    string name;
    string address;
    float salary;

public:
    Employee()
    {
        code = 1;
        name = "Hunter";
        address = "Linux";
        salary = 4545.6;
    }
    Employee(Employee &obj){
        code = obj.code;
        name = obj.name;
        address = obj.address;
        salary = obj.salary;
    }
    void display(){
        cout<<"Code "<<code<<endl << "Name " <<name<<endl;
        cout<<"Address "<<address<<endl<<"Salary "<<salary<<endl; 
    }
};
int main(){
    Employee e1;
   Employee e2(e1);
   e1.display();
   e2.display();
   return 0;
}