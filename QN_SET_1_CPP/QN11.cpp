// Program 11: Create a class time having hour, minute and second as data
// members. The constructor is used to initialize these members. Define a
// function add that takes two class objects as arguments and add them
// respectively then display the aggregate result.
#include <iostream>
using namespace std;
class time
{
    int hr;
    int min;
    int sec;

public:
    time(int h = 0, int m = 0, int s = 0)
    {
        hr = h;
        min = m;
        sec = s;
    }
    time add(time o2)
    {
        int rem=0;
        hr += o2.hr;
        min += o2.min;
        if (min >= 60)
        {
            rem = min / 60;
            hr += rem;
            min -= rem*60;
        }
        rem = 0;
        sec += o2.sec;
        if (sec >= 60)
        {
            rem = sec / 60;
            min += rem;
            sec -= rem*60;
        }
        return *this;
    }
    void display()
    {
        cout << "Total time:" << endl;
        cout << "Hrs: " << hr << " Min: " << min << " Sec:" << sec << endl;
    }
};
int main()
{
    time hunter1(4, 45, 44), hunter2(6, 34, 52), hunter3;
    hunter3 = hunter1.add(hunter2);
    hunter3.display();
    return 0;
}