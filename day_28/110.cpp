// Write a program to Create bank account system.
#include <iostream>
#include <vector>
using namespace std;

class Account
{
public:
    int accountNo;
    string name;
    float balance;
};

vector<Account> accounts;

void addAccount()
{
    Account a;

    cout << "Enter Account Number: ";
    cin >> a.accountNo;

    cout << "Enter Account Holder Name: ";
    cin >> a.name;

    cout << "Enter Initial Balance: ";
    cin >> a.balance;

    accounts.push_back(a);

    cout << "Account Created Successfully!\n";
}

void displayAccounts()
{
    if (accounts.size() == 0)
    {
        cout << "No Accounts Available!\n";
        return;
    }

    cout << "\n      Account Records\n";

    for (int i = 0; i < accounts.size(); i++)
    {
        cout << "Account No : " << accounts[i].accountNo << endl;
        cout << "Name       : " << accounts[i].name << endl;
        cout << "Balance    : " << accounts[i].balance << endl;
       
    }
}

void searchAccount()
{
    int acc;
    bool found = false;

    cout << "Enter Account Number: ";
    cin >> acc;

    for (int i = 0; i < accounts.size(); i++)
    {
        if (accounts[i].accountNo == acc)
        {
            found = true;

            cout << "Account Found\n";
            cout << "Account No : " << accounts[i].accountNo << endl;
            cout << "Name       : " << accounts[i].name << endl;
            cout << "Balance    : " << accounts[i].balance << endl;

            break;
        }
    }

    if (!found)
        cout << "Account Not Found!\n";
}

void depositMoney()
{
    int acc;
    float amount;
    bool found = false;

    cout << "Enter Account Number: ";
    cin >> acc;

    for (int i = 0; i < accounts.size(); i++)
    {
        if (accounts[i].accountNo == acc)
        {
            found = true;

            cout << "Enter Deposit Amount: ";
            cin >> amount;

            accounts[i].balance += amount;

            cout << "Amount Deposited Successfully!\n";
            cout << "Current Balance: " << accounts[i].balance << endl;

            break;
        }
    }

    if (!found)
        cout << "Account Not Found!\n";
}

void withdrawMoney()
{
    int acc;
    float amount;
    bool found = false;

    cout << "Enter Account Number: ";
    cin >> acc;

    for (int i = 0; i < accounts.size(); i++)
    {
        if (accounts[i].accountNo == acc)
        {
            found = true;

            cout << "Enter Withdraw Amount: ";
            cin >> amount;

            if (amount <= accounts[i].balance)
            {
                accounts[i].balance -= amount;
                cout << "Withdrawal Successful!\n";
                cout << "Current Balance: " << accounts[i].balance << endl;
            }
            else
            {
                cout << "Insufficient Balance!\n";
            }

            break;
        }
    }

    if (!found)
        cout << "Account Not Found!\n";
}

void deleteAccount()
{
    int acc;
    bool found = false;

    cout << "Enter Account Number to Delete: ";
    cin >> acc;

    for (int i = 0; i < accounts.size(); i++)
    {
        if (accounts[i].accountNo == acc)
        {
            accounts.erase(accounts.begin() + i);

            cout << "Account Deleted Successfully!\n";
            found = true;
            break;
        }
    }

    if (!found)
        cout << "Account Not Found!\n";
}

int main()
{
    int choice;

    do
    {
        cout << "\n===== Bank Account System =====\n";
        cout << "1. Add Account\n";
        cout << "2. Display Accounts\n";
        cout << "3. Search Account\n";
        cout << "4. Deposit Money\n";
        cout << "5. Withdraw Money\n";
        cout << "6. Delete Account\n";
        cout << "7. Exit\n";
        cout << "Enter Your Choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            addAccount();
            break;

        case 2:
            displayAccounts();
            break;

        case 3:
            searchAccount();
            break;

        case 4:
            depositMoney();
            break;

        case 5:
            withdrawMoney();
            break;

        case 6:
            deleteAccount();
            break;

        case 7:
            cout << "Thank You!\n";
            break;

        default:
            cout << "Invalid Choice!\n";
        }

    } while (choice != 7);

    return 0;
}