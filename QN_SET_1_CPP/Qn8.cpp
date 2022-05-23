// Program 8: Write a program to create a class called Room in which data items 
// are length, breadth and height. Create an array of objects in the room. And 
// finds its area and volume. 
#include <iostream>
using namespace std;
class Room{
    int length,breadth,height;
    public:
    void display(int l, int b, int h){
        length = l , breadth = b,height = h;
        cout <<"Area: "<<length*breadth<<endl;
        cout <<"Volume: "<< length * breadth * height << endl;
    }
};
int main(){
    Room ob[3];
    ob[0].display(1,3,4);
    ob[1].display(5,7,8);
    ob[2].display(5,7,3);
    return 0;
}