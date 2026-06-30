// Write a program to Create student record system using arrays and strings.
#include <iostream>
using namespace std;
int main()
{
    int rollNo[100];
    string name[100];
    float marks[100];

    int n = 0;
    int choice;
    int roll, i;
    bool found;
    do
    {
        cout << "\n      Student Record System";
        cout << "\n1. Add Student";
        cout << "\n2. Display Students";
        cout << "\n3. Search Student";
        cout << "\n4. Update Student";
        cout << "\n5. Delete Student";
        cout << "\n6. Exit";
        cout << "\nEnter Choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter Roll Number: ";
            cin >> rollNo[n];

            cout << "Enter Student Name: ";
            cin >> name[n];

            cout << "Enter Marks: ";
            cin >> marks[n];

            n++;
            cout << "Student Added Successfully.\n";
            break;

        case 2:
            if (n == 0)
            {
                cout << "No Student Records Found.\n";
            }
            else
            {
                cout << "\nStudent Records:\n";
                for (i = 0; i < n; i++)
                {
                    cout << "\nRoll Number : " << rollNo[i];
                    cout << "\nName        : " << name[i];
                    cout << "\nMarks       : " << marks[i] << endl;
                }
            }
            break;

        case 3:
            cout << "Enter Roll Number to Search: ";
            cin >> roll;

            found = false;

            for (i = 0; i < n; i++)
            {
                if (rollNo[i] == roll)
                {
                    cout << "\nStudent Found";
                    cout << "\nRoll Number : " << rollNo[i];
                    cout << "\nName        : " << name[i];
                    cout << "\nMarks       : " << marks[i] << endl;
                    found = true;
                    break;
                }
            }

            if (!found)
            {
                cout << "Student Not Found.\n";
            }
            break;

        case 4:
            cout << "Enter Roll Number to Update: ";
            cin >> roll;

            found = false;

            for (i = 0; i < n; i++)
            {
                if (rollNo[i] == roll)
                {
                    cout << "Enter New Name: ";
                    cin >> name[i];

                    cout << "Enter New Marks: ";
                    cin >> marks[i];

                    cout << "Record Updated Successfully.\n";
                    found = true;
                    break;
                }
            }

            if (!found)
            {
                cout << "Student Not Found.\n";
            }
            break;

        case 5:
            cout << "Enter Roll Number to Delete: ";
            cin >> roll;

            found = false;

            for (i = 0; i < n; i++)
            {
                if (rollNo[i] == roll)
                {
                    for (int j = i; j < n - 1; j++)
                    {
                        rollNo[j] = rollNo[j + 1];
                        name[j] = name[j + 1];
                        marks[j] = marks[j + 1];
                    }

                    n--;
                    cout << "Record Deleted Successfully.\n";
                    found = true;
                    break;
                }
            }

            if (!found)
            {
                cout << "Student Not Found.\n";
            }
            break;

        case 6:
            cout << "Exiting Program...";
            break;

        default:
            cout << "Invalid Choice.\n";
        }

    } while (choice != 6);

    return 0;
}