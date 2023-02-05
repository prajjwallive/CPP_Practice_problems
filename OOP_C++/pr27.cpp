// Working with Classes , Functions and Objects
#include <iostream>
using namespace std;
class student_details
{
    string name;
    int roll_no;
    float Percentage;

public:
    void data_entry(int a)
    {
        cout << " Enter the Following details for the student: " << a + 1 << endl;
        cout << "Name" << endl
             << "Roll no " << endl
             << "Percentage " << endl;
        cout << "*********************************************" << endl;
        getline(cin, name);
        cin >> roll_no;
        cin >> Percentage;
    }
    void student_data()
    {
        cout << "Student detail" << endl;
        cout << "Student Name:" << name << endl;
        cout << "Roll_no:" << roll_no << endl;
        cout << "Percentage:" << Percentage << endl;
    }
};
int main()
{

    int i, d;
    student_details s[3];
    for (i = 0; i < 3; i++)
    {
        s[i].data_entry(i);
    }
    cout << " Enter the Student Number to Fetch the data:" << endl;
    cin >> d;
    s[d].student_data();
    return 0;
}