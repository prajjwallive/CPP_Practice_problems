// Program 18: Write a program to add time in hours and minutes of two
// different objects using friend function
#include <iostream>
using namespace std;
class timer
{
    int hours;
    int minutes;

public:
    void input()
    {
        cout << "Enter the hour and minutes: " << endl;
        cin >> hours;
        cin >> minutes;
    }
    friend void add(timer o1, timer o2);
};
void add(timer o1, timer o2)
{
    int rem;
    o1.hours += o2.hours;
    o1.minutes += o1.minutes;
    rem = o1.minutes / 60;
    o1.hours += rem;
    o1.minutes -= rem*60;
    cout << "Added time is: " << endl;
    cout << "Hours: " << o1.hours << endl;
    cout << "Minutes: " << o1.minutes << endl;
}
int main()
{
    timer t1, t2;
    t1.input();
    t2.input();
    add(t1, t2);
    return 0;
}