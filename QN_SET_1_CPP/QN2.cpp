// Program 2: Design a class to represent a bank account with data members
// name, account-number, account-type, and balance. Define functions to assign
// initial values, to deposit an amount, to withdraw an amount after checking
// balance, and to display the name and balance.
#include <iostream>
#include <string>
using namespace std;
class bank_account
{
    char name[32];
    double account_number;
    string account_type;
    float balance;
public:
    void initial_values()
    {
        cout << "Enter the following details:" << endl;
        cout <<"Name:" << endl;
        cin >> name;
        cout << "Account_Number" << endl;
        cin >> account_number;
        cout << "Enter the Account type" << endl;
        cin >> account_type;
        cout << "Enter Balance (Rs.)" << endl;
        cin >> balance;
        cout <<"Account created Successfully"<<endl;
        holder();
    }
    void deposit()
    {
        float temp;
        cout << "Your current balance is Rs." << balance << endl;
        cout << "Enter amount to deposit." << endl;
        cin >> temp;
        balance += temp;
        cout << "Your amount is deposited Successfully!" << endl;
        cout << "Your new balance is Rs." << balance << endl;
        holder();
    }
    void withdraw()
    {
        float temp;
        cout << "Your current balance is Rs." << balance << endl;
        cout << "Enter amount to withdraw." << endl;
        cin >> temp;
        balance -= temp;
        cout << "Your amount is withdrawn Successfully!" << endl;
        cout << "Your new balance is Rs." << balance << endl;
        holder();
    }
    void check()
    {
        cout << "Account Number: " << account_number << endl;
        cout << "Account Holder Name: " << name << endl;
        cout << "Account type: " << account_type << endl;
        cout << "Your current Balance is Rs." << balance << endl;
        holder();
    }
    void holder()
    {
        char x;
        cout << "Enter any Key to Continue....\n";
        cin >> x;
    }
};

int main()
{
    bank_account hunter;
    int x = 0;
    char e;
A:
    do
    {

        if (x == 0)
        {
            system("cls");
        }
        else
        {
            system("cls");
            cout << "Task Done Successfully!\n";
        }
        cout << "____________________________Welcome to U-Tech Bank!_____________________________" << endl;
        cout << "You can do the following things\n";
        cout << "Please choose the appropriate numbers";
        cout << "\n1:Open Account"
             << "\n2.Deposit"
             << "\n3.Withdraw"
             << "\n4.Check Balance"
             << "\n5.Exit\n";
        cout << "***********************************************************\n"
             << endl;
        cout << "what is your option\n";
        cin >> x;
        switch (x)
        {
        case 1:
            hunter.initial_values();
            break;
        case 2:
            hunter.deposit();
            break;
        case 3:
            hunter.withdraw();
            break;
        case 4:
            hunter.check();
            break;
        case 5:
            cout << "Do want to proceed to check out!(y/n)" << endl;
            cin >> e;
            if (e == 'y' || e == 'Y')
            {
                exit(32);
            }
            else
            {
                goto A;
            }
        default:
            cout << "Error in input : Please! try again" << endl;
            hunter.holder();
        }
    } while (x != 5);
    return 0;
}