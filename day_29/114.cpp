// Write a program to Create menu-driven array operations system.
#include <iostream>
using namespace std;

int main()
{
    int arr[100];
    int n = 0;
    int choice, i, a, value;

    do
    {
        cout << "\n      MENU-DRIVEN ARRAY OPERATIONS";
        cout << "\n1. Create Array";
        cout << "\n2. Display Array";
        cout << "\n3. Insert Element";
        cout << "\n4. Delete Element";
        cout << "\n5. Search Element";
        cout << "\n6. Update Element";
        cout << "\n7. Exit";

        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter number of elements: ";
            cin >> n;

            cout << "Enter array elements: ";
            for (i = 0; i < n; i++)
            {
                cin >> arr[i];
            }
            break;

        case 2:
            if (n == 0)
            {
                cout << "Array is empty." << endl;
            }
            else
            {
                cout << "Array elements are: ";
                for (i = 0; i < n; i++)
                {
                    cout << arr[i] << " ";
                }
                cout << endl;
            }
            break;

        case 3:
            if (n == 100)
            {
                cout << "Array is full." << endl;
            }
            else
            {
                cout << "Enter element: ";
                cin >> a;

                cout << "Enter value: ";
                cin >> value;

                if (a >= 1 && a <= n + 1)
                {
                    for (i = n; i >= a; i--)
                    {
                        arr[i] = arr[i - 1];
                    }

                    arr[a - 1] = value;
                    n++;

                    cout << "Element inserted successfully." << endl;
                }
                else
                {
                    cout << "Invalid element." << endl;
                }
            }
            break;

        case 4:
            if (n == 0)
            {
                cout << "Array is empty." << endl;
            }
            else
            {
                cout << "Enter element to delete: ";
                cin >> a;

                if (a >= 1 && a <= n)
                {
                    for (i = a - 1; i < n - 1; i++)
                    {
                        arr[i] = arr[i + 1];
                    }

                    n--;

                    cout << "Element deleted successfully." << endl;
                }
                else
                {
                    cout << "Invalid element." << endl;
                }
            }
            break;

        case 5:
            if (n == 0)
            {
                cout << "Array is empty." << endl;
            }
            else
            {
                cout << "Enter element to search: ";
                cin >> value;

                for (i = 0; i < n; i++)
                {
                    if (arr[i] == value)
                    {
                        cout << "Element found at element " << i + 1 << endl;
                        break;
                    }
                }

                if (i == n)
                {
                    cout << "Element not found." << endl;
                }
            }
            break;

        case 6:
            if (n == 0)
            {
                cout << "Array is empty." << endl;
            }
            else
            {
                cout << "Enter element to update: ";
                cin >> a;

                if (a >= 1 && a <= n)
                {
                    cout << "Enter new value: ";
                    cin >> value;

                    arr[a - 1] = value;

                    cout << "Element updated successfully." << endl;
                }
                else
                {
                    cout << "Invalid element." << endl;
                }
            }
            break;

        case 7:
            cout << "Thank You!" << endl;
            break;

        default:
            cout << "Invalid Choice!" << endl;
        }

    } while (choice != 7);

    return 0;
}