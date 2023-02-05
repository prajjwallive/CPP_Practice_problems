#include <iostream>
using namespace std;
class utech{
   int x;
   int y;
   public:
   utech(){
       x =2;
       y=2;
   }
   void display(){
       cout << "The value of x is: "<<x<<endl;
       cout << "The value of y is: "<<y<<endl;
   }
   void operator -();
};
void utech::operator -(){
    x--;
    y++;
}

int main(){
    utech obj1;
    -obj1;
    obj1.display();
    return 0;
}