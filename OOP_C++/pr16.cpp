// Float ,double and long double literals
#include <iostream>
using namespace std;
int main()
{
    cout << "The size of 34.4 is " << sizeof(34.4) << endl;
    cout << "The size of 34.4 is " << sizeof(34.4F) << endl;
    cout << "The size of 34.4 is " << sizeof(34.4F) << endl;
    cout << "The size of 34.4 is " << sizeof(34.4l) << endl;
    cout << "The size of 34.4 is " << sizeof(34.4L) << endl;
    return 0;
}