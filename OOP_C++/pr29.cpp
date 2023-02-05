// Classes and object making the simple calculator
#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <windows.h>

using namespace std;
class calculator
{
    double a, b;

public:
    void loading()
    {

        for (int j = 0; j < 5; j++)
        {
            cout << " \rLoading  \rLoading";
            for (int i = 0; i < 5; i++)
            {
                cout << "*";
                Sleep(300);
            }
        }
    }
    void display()
    {
        cout << "Choose the operation to operate" << endl;
        cout << "1. + " << endl;
        cout << "2. - " << endl;
        cout << "3. / " << endl;
        cout << "4. * " << endl;
        cout << "5. 'y' to exit " << endl;
        cout << "*****************************************" << endl;
    };
    void input()
    {
        cout << "*****************Welcome to Simple Calculator**************** " << endl;
        cout << "Enter the first number" << endl;
        cin >> a;
        cout << " Enter the second number" << endl;
        cin >> b;
    }
    double operation(char x)
    {

        switch (x)
        {
        case '*':
            return (a * b);
            break;
        case '+':
            return (a + b);
            break;
        case '-':
            return (a - b);
            break;
        case '/':
            return (a / b);
            break;
        case 'y':
            cout << "Exiting" << endl;
            Sleep(200);
            exit(0);
        default:
            cout << "Error 0x33452" << endl;
            return 1;
        }
    }
};
int main()
{
    char x, u;
    calculator calc;
    calc.loading();
    while (x != 'y')
    {
        system("cls");
        calc.input();
        calc.display();
        cin >> x;
        cout << "Answer: " << calc.operation(x) << endl;
        cout << " Enter any key to continue" << endl;
        cin >> u;
        getchar();
    }
    getch();
    return 0;
}