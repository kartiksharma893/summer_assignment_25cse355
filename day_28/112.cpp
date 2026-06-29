// Write a program to Create contact management system.
#include <iostream>
#include <vector>
using namespace std;

class Contact
{
public:
    int contactId;
    string name;
    string phone;
};

vector<Contact> contacts;

void addContact()
{
    Contact c;

    cout << "Enter Contact ID: ";
    cin >> c.contactId;

    cout << "Enter Contact Name: ";
    cin >> c.name;

    cout << "Enter Phone Number: ";
    cin >> c.phone;

    contacts.push_back(c);

    cout << "Contact Added Successfully!\n";
}

void displayContacts()
{
    if (contacts.size() == 0)
    {
        cout << "No Contacts Available!\n";
        return;
    }

    cout << "\n      Contact Records\n";

    for (int i = 0; i < contacts.size(); i++)
    {
        cout << "Contact ID   : " << contacts[i].contactId << endl;
        cout << "Name         : " << contacts[i].name << endl;
        cout << "Phone Number : " << contacts[i].phone << endl;
     
    }
}

void searchContact()
{
    int id;
    bool found = false;

    cout << "Enter Contact ID: ";
    cin >> id;

    for (int i = 0; i < contacts.size(); i++)
    {
        if (contacts[i].contactId == id)
        {
            found = true;

            cout << "Contact Found\n";
            cout << "Contact ID   : " << contacts[i].contactId << endl;
            cout << "Name         : " << contacts[i].name << endl;
            cout << "Phone Number : " << contacts[i].phone << endl;

            break;
        }
    }

    if (!found)
        cout << "Contact Not Found!\n";
}

void updateContact()
{
    int id;
    bool found = false;

    cout << "Enter Contact ID: ";
    cin >> id;

    for (int i = 0; i < contacts.size(); i++)
    {
        if (contacts[i].contactId == id)
        {
            found = true;

            cout << "Enter New Name: ";
            cin >> contacts[i].name;

            cout << "Enter New Phone Number: ";
            cin >> contacts[i].phone;

            cout << "Contact Updated Successfully!\n";
            break;
        }
    }

    if (!found)
        cout << "Contact Not Found!\n";
}

void deleteContact()
{
    int id;
    bool found = false;

    cout << "Enter Contact ID to Delete: ";
    cin >> id;

    for (int i = 0; i < contacts.size(); i++)
    {
        if (contacts[i].contactId == id)
        {
            contacts.erase(contacts.begin() + i);

            cout << "Contact Deleted Successfully!\n";
            found = true;
            break;
        }
    }

    if (!found)
        cout << "Contact Not Found!\n";
}

int main()
{
    int choice;

    do
    {
        cout << "\n      Contact Management System\n";
        cout << "1. Add Contact\n";
        cout << "2. Display Contacts\n";
        cout << "3. Search Contact\n";
        cout << "4. Update Contact\n";
        cout << "5. Delete Contact\n";
        cout << "6. Exit\n";
        cout << "Enter Your Choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            addContact();
            break;

        case 2:
            displayContacts();
            break;

        case 3:
            searchContact();
            break;

        case 4:
            updateContact();
            break;

        case 5:
            deleteContact();
            break;

        case 6:
            cout << "Thank You!\n";
            break;

        default:
            cout << "Invalid Choice!\n";
        }

    } while (choice != 6);

    return 0;
}