//Program to print the multiplication table of any user inputted number
#include <iostream>
using namespace std;
int main(){
    int n, i ;
    cout << " Enter the Multiplication table you want :\n";
    cin >> n ;
    for ( i = 1; i < 11; i++)
    {
        cout << "\n " << n << " X " << i << " = " << n * i ;

    }
    return 0;
}