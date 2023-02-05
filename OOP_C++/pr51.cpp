// How can we compute the roots of quadratic equations by using template function.
#include <iostream>
#include <cmath>
using namespace std;
template <class T>
void quadratic(T a, T b, T c)
{
    T x1, x2, realPart, imaginaryPart, discriminant;
    discriminant = b * b - 4 * a * c;

    if (discriminant > 0)
    {
        x1 = (-b + sqrt(discriminant)) / (2 * a);
        x2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << "Roots are real and different." << endl;
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    }

    else if (discriminant == 0)
    {
        cout << "Roots are real and same." << endl;
        x1 = -b / (2 * a);
        cout << "x1 = x2 =" << x1 << endl;
    }

    else
    {
        realPart = -b / (2 * a);
        imaginaryPart = sqrt(-discriminant) / (2 * a);
        cout << "Roots are complex and different." << endl;
        cout << "x1 = " << realPart << "+" << imaginaryPart << "i" << endl;
        cout << "x2 = " << realPart << "-" << imaginaryPart << "i" << endl;
    }
}
template <class m>
void input_fun(m x)
{
    m a, b, c;
    cout << "Enter the coefficient of quadratic Eqn: " << endl;
    cin >> a;
    cin >> b;
    cin >> c;
    quadratic(a, b, c);
}
int main()
{
    input_fun(2);
    return 0;
}