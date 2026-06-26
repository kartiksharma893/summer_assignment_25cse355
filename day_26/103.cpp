// Write a program to Create ATM simulation.
#include <iostream>
using namespace std;
int main()
{
    int balance = 100000, amount;
    cout << "you want to avail which service:-\n1.check balance\t\t2.withdraw money\n3.deposit money\t\t4.exit" << endl;
    cout << endl
         << "enter serial number of the service that you want to avail: ";
    int n;
    cin >> n;
    if (n == 1)
    {
        cout << balance;
    }
    else if (n == 2)
    {
        cout << "enter amount: ";
        cin >> amount;
        if (amount <= balance)
        {
            balance -= amount;
            cout << "withdrawal successful \ncurrent balance is " << balance;
        }
        else
        {
            cout << "insufficient balance ";
        }
    }
    else if (n == 3)
    {
        cout << "enter amount: ";
        cin >> amount;
        balance += amount;
        cout << "deposition successful\ncurrent balance is " << balance;
    }
    else
    {
        cout << "thankyou for using";
    }
    return 0;
}