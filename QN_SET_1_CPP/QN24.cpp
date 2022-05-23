// C++ Program to concatenate two string
// using unary operator overloading
#include <iostream>
#include <string.h>
 
using namespace std;
 
// Class to implement operator overloading
// function for concatenating the strings
class AddString {
 
public:
    // Classes object of string
    char s1[25], s2[25];
 
    // Parameterized Constructor
    AddString(char str1[], char str2[])
    {
        // Initialize the string to class object
        strcpy(this->s1, str1);
        strcpy(this->s2, str2);
    }
 
    // Overload Operator+ to concat the string
    void operator+()
    {
        cout << "\nConcatenation: " << strcat(s1, s2);
    }
};
 
// Driver Code
int main()
{
    // Declaring two strings
    char str1[] = "Geeks";
    char str2[] = "ForGeeks";
 
    // Declaring and initializing the class
    // with above two strings
    AddString a1(str1, str2);
 
    // Call operator function
    +a1;
    return 0;
}