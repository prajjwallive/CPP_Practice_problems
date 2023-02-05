// Working with the constructor and Static variables
#include <iostream>
using namespace std;
class s1
{   
    static int a;
    public:
    void f1(){
        cout << "Value of a is:"<<a<<endl;
        a++;
    }
    void f2(){
        cout << "Value of a is:"<<a<<endl;
        a++;
    }
    void f3(){
        cout << "Value of a is:"<<a<<endl;
        a++;
    }
    void f4(){
        cout << "Value of a is:"<<a<<endl;
        a++;
    }
};
int s1:: a;
int main(){
    s1 o1,o2,o3;
    o1.f1();
    o1.f2();
    o1.f3();
    o1.f4();
    o2.f1();
    o2.f2();
    o2.f3();
    o2.f4();
    o3.f1();
    o3.f2();
    o3.f3();
    o3.f4();
    return 0;
}