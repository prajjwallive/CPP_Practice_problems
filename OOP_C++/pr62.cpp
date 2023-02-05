#include <iostream>
using namespace std;
class Date
{
    int day;
    int month;
    int year;

public:
    Date()
    {
    }
    Date(int x, int y, int z)
    {
        year = x;
        month = y;
        day = z;
    }
    Date addDate(Date o1)
    {
        Date temp;
        int rem=0;
        temp.year = year + o1.year;
        temp.month = month + o1.month;
        temp.day = day + o1.day;
        if(temp.day >=30){
            rem = temp.day/30;
            temp.month +=rem;
            temp.day -= rem*30;
        }
        if(temp.month>=12){
            rem = 0;
            rem = temp.month/12;
            temp.year +=rem;
            temp.month -=rem*12;
        }
        return temp;
    }
    void display(){
        cout <<"Year: "<<year<<endl<<"Month: "<<month<<endl<<"Day: "<<day<<endl;
    }
};
int main(){
    Date o1(1,33,23), o2(5,3,7),o3;
    o1.display();
    o2.display();
    o3 = o1.addDate(o2);
    o3.display();
    return 0;
}