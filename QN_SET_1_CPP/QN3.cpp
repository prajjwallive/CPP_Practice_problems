// Program 3: Using a class write a program that receives inputs, principle 
// amount, time and rate. Keeping rate 8% as the default argument, calculate the 
// simple interest for three customers.
#include <iostream>
using namespace std;
class customers{
int time;
float per;
float principle;
public:
void input(){
    cout <<"Enter the following things to calculate the interest"<<endl;
    cout<<"Princple Amount"<<endl;
    cin>> principle;
    cout <<"Time"<<endl;
    cin >> time;
}
void display(int a=8){
    per =8;
    float SI;
    SI = (principle*time*per)/100;
    cout <<"The SI for this customer is:"<<SI<<endl;
}
};

int main(){
    customers rozal,hunter,rozal_dai;
    rozal.input();
    rozal.display(9);
    hunter.input();
    hunter.display();
    rozal_dai.input();
    rozal_dai.display(20);
    return 0;
}