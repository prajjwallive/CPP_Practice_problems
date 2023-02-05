// use of Default parameters function in C++
#include <iostream>
using namespace std;
float intrest(int principle, float rate = 1.04) // use of Default Parameters
{
    return (principle * rate);
}
ostream &symbol(ostream &output) // Here I have used  Custom Manipulator named symbol 
{
    return output << "$";
}
int main()
{
    int principle;
    cout << "Enter the principle amount of the money" << endl;
    cin >> principle;
    cout << " Total Return with Intrest is:" << symbol <<  intrest(principle) << endl;
    cout << " Total Return for the VIP is:" << symbol <<  intrest(principle, 1.1) << endl; //endl is the manipulators
    return 0;
}
