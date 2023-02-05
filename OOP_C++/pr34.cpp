// Q. Create a class Fraction to represent a fraction of the type 2/5. Overload the 4 arithmetic operators and = = to compare two fraction objects.
#include <iostream>
#include <cstdlib>
using namespace std;

class Fraction
{
public:
     int num, deno;

public:
     Fraction()
     {
          num = 1;
          deno = 1;
     }
     Fraction(int n, int d)
     {
          num = n;
          if (d == 0)
          {
               cout << "Error: Attempting to Divide by Zero" << endl;
               exit(0); // it will terminate the program if division by 0 is attempted
          }
          else
               deno = d;
     }
     Fraction operator+(Fraction f)
     {
          int n = num * f.deno + f.num * deno;
          int d = deno * f.deno;
          return Fraction(n / gcd(n, d), d / gcd(n, d));
     }
     Fraction operator-(Fraction f)
     {
          int n = num * f.deno - f.num * deno;
          int d = deno * f.deno;
          return Fraction(n / gcd(n, d), d / gcd(n, d));
     }
     Fraction operator*(Fraction f)
     {
          int n = num * f.num;
          int d = deno * f.deno;
          return Fraction(n / gcd(n, d), d / gcd(n, d));
     }
     Fraction operator/(Fraction f)
     {
          int n = num * f.deno;
          int d = deno * f.num;
          return Fraction(n / gcd(n, d), d / gcd(n, d));
     }
     bool operator==(Fraction &f)
     {
          return (num == f.num) && (deno == f.deno);
     }
     int gcd(int n, int d)
     {
          int rem;
          while (d != 0)
          {
               rem = n % d;
               n = d;
               d = rem;
          }
          return n;
     }
     void accept()
     {
          cout << "\n Enter Numerator     :  ";
          cin >> num;
          cout << "\n Enter Denominator   :  ";
          cin >> deno;
     }
};
int main()
{
     Fraction f1;
     Fraction f2;
     Fraction f3;

     cout << "\n Enter 1st Fraction Value ";
     cout << "\n ------------------------- \n";
     f1.accept();

     cout << "\n Enter 2nd Fraction Value ";
     cout << "\n ------------------------- \n";
     f2.accept();

     f3 = f1 + f2;
     cout << "\n -------------------------------------";
     cout << "\n Sum of Two Numbers        : " << f3.num << "/" << f3.deno << endl;

     f3 = f1 - f2;
     cout << "\n Difference of Two Numbers : " << f3.num << "/" << f3.deno << endl;

     f3 = f1 * f2;
     cout << "\n Product of Two Numbers    : " << f3.num << "/" << f3.deno << endl;

     f3 = f1 / f2;
     cout << "\n Division of Two Numbers   : " << f3.num << "/" << f3.deno;
     cout << "\n -------------------------------------";

     if (f1 == f2)
          cout << "\n Fraction 1 is Equal to Fraction 2" << endl;
     else
          cout << "\n Fraction 1 is Not Equal to Fraction 2" << endl;
     return 0;
}