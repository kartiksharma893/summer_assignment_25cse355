// Write a program to Create mini library system.
#include <iostream>
using namespace std;
int main()
{
    int bookId[100];
    string title[100];
    string author[100];
    bool issued[100];

    int n = 0;
    int choice;
    int id, i;
    bool found;
    do
    {
        cout << "\n      Mini Library System";
        cout << "\n1. Add Book";
        cout << "\n2. Display Books";
        cout << "\n3. Search Book";
        cout << "\n4. Issue Book";
        cout << "\n5. Return Book";
        cout << "\n6. Delete Book";
        cout << "\n7. Exit";
        cout << "\nEnter Choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Enter Book ID: ";
            cin >> bookId[n];

            cout << "Enter Book Title: ";
            cin >> title[n];

            cout << "Enter Author Name: ";
            cin >> author[n];

            issued[n] = false;

            n++;

            cout << "Book Added Successfully.\n";
            break;

        case 2:
            if (n == 0)
            {
                cout << "No Books Available.\n";
            }
            else
            {
                cout << "\nBook Records:\n";

                for (i = 0; i < n; i++)
                {
                    cout << "\nBook ID : " << bookId[i];
                    cout << "\nTitle   : " << title[i];
                    cout << "\nAuthor  : " << author[i];

                    if (issued[i])
                        cout << "\nStatus  : Issued";
                    else
                        cout << "\nStatus  : Available";

                    cout << endl;
                }
            }
            break;

        case 3:
            cout << "Enter Book ID to Search: ";
            cin >> id;

            found = false;

            for (i = 0; i < n; i++)
            {
                if (bookId[i] == id)
                {
                    cout << "\nBook Found";
                    cout << "\nBook ID : " << bookId[i];
                    cout << "\nTitle   : " << title[i];
                    cout << "\nAuthor  : " << author[i];

                    if (issued[i])
                        cout << "\nStatus  : Issued";
                    else
                        cout << "\nStatus  : Available";

                    cout << endl;

                    found = true;
                    break;
                }
            }

            if (!found)
            {
                cout << "Book Not Found.\n";
            }
            break;

        case 4:
            cout << "Enter Book ID to Issue: ";
            cin >> id;

            found = false;

            for (i = 0; i < n; i++)
            {
                if (bookId[i] == id)
                {
                    if (issued[i])
                    {
                        cout << "Book Already Issued.\n";
                    }
                    else
                    {
                        issued[i] = true;
                        cout << "Book Issued Successfully.\n";
                    }

                    found = true;
                    break;
                }
            }

            if (!found)
            {
                cout << "Book Not Found.\n";
            }
            break;

        case 5:
            cout << "Enter Book ID to Return: ";
            cin >> id;

            found = false;

            for (i = 0; i < n; i++)
            {
                if (bookId[i] == id)
                {
                    if (!issued[i])
                    {
                        cout << "Book is Already Available.\n";
                    }
                    else
                    {
                        issued[i] = false;
                        cout << "Book Returned Successfully.\n";
                    }

                    found = true;
                    break;
                }
            }

            if (!found)
            {
                cout << "Book Not Found.\n";
            }
            break;

        case 6:
            cout << "Enter Book ID to Delete: ";
            cin >> id;

            found = false;

            for (i = 0; i < n; i++)
            {
                if (bookId[i] == id)
                {
                    for (int j = i; j < n - 1; j++)
                    {
                        bookId[j] = bookId[j + 1];
                        title[j] = title[j + 1];
                        author[j] = author[j + 1];
                        issued[j] = issued[j + 1];
                    }

                    n--;

                    cout << "Book Deleted Successfully.\n";
                    found = true;
                    break;
                }
            }

            if (!found)
            {
                cout << "Book Not Found.\n";
            }
            break;

        case 7:
            cout << "Exiting Program...";
            break;

        default:
            cout << "Invalid Choice.\n";
        }

    } while (choice != 7);

    return 0;
}