// Program 14: Write a program to enter the information of n students and then
// display it using the concept of multilevel inheritance.
#include <iostream>
using namespace std;
class student_data
{
public:
    string name;
    int cls;
    int roll_num;
    student_data(){};
};
class student_input : public student_data
{
public:
    void input()
    {
        cout << "Enter the following details of the student" << endl;
        cout << "Name:" << endl;
        cin >> name;
        cout << "Class" << endl;
        cin >> cls;
        cout << "Roll No." << endl;
        cin >> roll_num;
    }
};
class output : public student_input
{
public:
    void display()
    {
        cout << "Details of the student" << endl;
        cout << "Name:" << endl;
        cout << name << endl;
        cout << "Class" << endl;
        cout << cls << endl;
        cout << "Roll No." << endl;
        cout << roll_num << endl;
    }
};
int main()
{

    int num;
    cout << "Enter the number of student" << endl;
    cin >> num;
    output o1[num];
    for (int i = 0; i < num; i++)
    {
        o1[i].input();
    }
    for (int i = 0; i < num; i++)
    {
        o1[i].display();
    }

    return 0;
}