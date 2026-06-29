// Write a program to Create menu-driven string operations system.
#include <iostream>
using namespace std;

int main()
{
    string str;
    int choice, i, length;
    char ch;

    do
    {
        cout << "\n      MENU-DRIVEN STRING OPERATIONS";
        cout << "\n1. Enter String";
        cout << "\n2. Display String";
        cout << "\n3. Find Length";
        cout << "\n4. Reverse String";
        cout << "\n5. Search Character";
        cout << "\n6. Exit";

        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter string: ";
            cin >> str;
            break;

        case 2:
            cout << "String = " << str << endl;
            break;

        case 3:
            length = 0;
            while (str[length] != '\0')
            {
                length++;
            }
            cout << "Length = " << length << endl;
            break;

        case 4:
            cout << "Reverse String = ";
            length = 0;

            while (str[length] != '\0')
            {
                length++;
            }

            for (i = length - 1; i >= 0; i--)
            {
                cout << str[i];
            }
            cout << endl;
            break;

        case 5:
            cout << "Enter character to search: ";
            cin >> ch;

            for (i = 0; str[i] != '\0'; i++)
            {
                if (str[i] == ch)
                {
                    cout << "Character found at position " << i + 1 << endl;
                    break;
                }
            }

            if (str[i] == '\0')
            {
                cout << "Character not found." << endl;
            }
            break;

        case 6:
            cout << "Thank You!" << endl;
            break;

        default:
            cout << "Invalid Choice!" << endl;
        }

    } while (choice != 6);

    return 0;
}