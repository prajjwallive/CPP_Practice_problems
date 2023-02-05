#include <iostream>
using namespace std;
class adder_s
{
    string firstName;
    string secondName;
    string Name;

public:
    adder_s()
    {
        // this is default constructor
    }
    adder_s(string a, string b){
        firstName = a;
        secondName = b;
    }
    void string_adder(){
        Name = firstName + secondName;
        cout <<"The contacitnated name is: "<<Name;
    }
};
int main(){
    adder_s o1;
    adder_s o2("Prajjwal","Live");
    o2.string_adder();
    return 0;
}