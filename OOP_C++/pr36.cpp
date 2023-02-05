#include <iostream>
using namespace std;
class student
{
public:
    int roll_no;
    long long int phone;
    string address;
};
int main()
{
    student s1, s2;
    s1.roll_no = 12;
    s1.phone = 9845298948;
    s1.address = "bharatpur";
    s2.roll_no = 25;
    s2.phone = 9455298948;
    s2.address = "gondrang";
    cout << "the roll no,phone number &address of sam are: " << s1.roll_no << endl
         << s1.phone << endl
         << s1.address << endl;
    cout << "the roll no,phone number &address of john are: " << s2.roll_no << endl
         << s2.phone << endl
         << s2.address << endl;
    return 0;
}