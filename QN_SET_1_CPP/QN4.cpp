// Program 4: Write a program according to the specification given below:  
// •	Create a class Teacher with data members, tid & subject and member functions for reading and displaying data members.  
// •	Create another class Staff with data members, sid & position, and member functions for reading and displaying for data members.  
// •	Derive a class Coordinator from the Teacher and Staff and the class must have its own data member department and member functions for reading and displaying data members.  
// •	Create two objects of the coordinator class and read and display their details.  
#include <iostream>
using namespace std;
class teacher{
int tid;
string subject;
public:
void teacher_reading(){
 cout << "Teacher ID"<<endl;
 cin >> tid;
 cout << "Subject"<<endl;
 cin >> subject;
}
void teacher_display(){
 cout <<"Teacher Data"<<endl;
 cout << "Teacher ID"<<endl;
 cout << tid<<endl;
 cout << "Subject"<<endl;
 cout  << subject<<endl;
}
};
class staff{
int sid;
string position;
public:
void coordinator_reading(){
 cout << "Staff ID"<<endl;
 cin >> sid;
 cout << "Position"<<endl;
 cin >> position;
}
void staff_display(){
 cout <<"Staff Data"<<endl;
 cout << "Staff ID"<<endl;
 cout << sid<<endl;
 cout << "Position"<<endl;
 cout  << position<<endl;
}
};
class coordinator: public teacher, public staff{
char department[30];
public:
void coordinator_reading(){
    cout <<"Enter your department"<<endl;
    cin >> department;
    teacher::teacher_reading();
}
void coordinator_display(){
    teacher::teacher_display();
    cout <<"Department:"<<department<<endl;
}
};
int main(){
    coordinator c1,c2;
    c1.coordinator_reading();
    c2.coordinator_reading();
    c1.coordinator_display();
    c2.coordinator_display();
    return 0;
}