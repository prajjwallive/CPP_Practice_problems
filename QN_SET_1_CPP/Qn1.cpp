// Program 1: Write a program to find the cube of given integer using inline function 
#include <iostream>
using namespace std;

class hunter{
int x;
public:
hunter(int a){
    x =a;
}
inline void display(){
   cout <<"The Cube of given number is: "<<x*x*x;
}
};
int main(){
    hunter utsav(5);
    utsav.display();
    return 0;
}
