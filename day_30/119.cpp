// Write a program to Create mini employee management system.
#include <iostream>
using namespace std;
int main()
{
    int empId[100];
    string name[100];
    string department[100];
    float salary[100];

    int n = 0;
    int choice;
    int id, i;
    bool found;

    do
    {
        cout << "\n     Mini Employee Management System";
        cout << "\n1. Add Employee";
        cout << "\n2. Display Employees";
        cout << "\n3. Search Employee";
        cout << "\n4. Update Employee";
        cout << "\n5. Delete Employee";
        cout << "\n6. Exit";
        cout << "\nEnter Choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter Employee ID: ";
            cin >> empId[n];

            cout << "Enter Employee Name: ";
            cin >> name[n];

            cout << "Enter Department: ";
            cin >> department[n];

            cout << "Enter Salary: ";
            cin >> salary[n];

            n++;

            cout << "Employee Added Successfully.\n";
            break;

        case 2:
            if (n == 0)
            {
                cout << "No Employee Records Found.\n";
            }
            else
            {
                cout << "\nEmployee Records:\n";

                for (i = 0; i < n; i++)
                {
                    cout << "\nEmployee ID : " << empId[i];
                    cout << "\nName        : " << name[i];
                    cout << "\nDepartment  : " << department[i];
                    cout << "\nSalary      : " << salary[i] << endl;
                }
            }
            break;

        case 3:
            cout << "Enter Employee ID to Search: ";
            cin >> id;

            found = false;

            for (i = 0; i < n; i++)
            {
                if (empId[i] == id)
                {
                    cout << "\nEmployee Found";
                    cout << "\nEmployee ID : " << empId[i];
                    cout << "\nName        : " << name[i];
                    cout << "\nDepartment  : " << department[i];
                    cout << "\nSalary      : " << salary[i] << endl;

                    found = true;
                    break;
                }
            }

            if (!found)
            {
                cout << "Employee Not Found.\n";
            }
            break;

        case 4:
            cout << "Enter Employee ID to Update: ";
            cin >> id;

            found = false;

            for (i = 0; i < n; i++)
            {
                if (empId[i] == id)
                {
                    cout << "Enter New Name: ";
                    cin >> name[i];

                    cout << "Enter New Department: ";
                    cin >> department[i];

                    cout << "Enter New Salary: ";
                    cin >> salary[i];

                    cout << "Record Updated Successfully.\n";

                    found = true;
                    break;
                }
            }

            if (!found)
            {
                cout << "Employee Not Found.\n";
            }
            break;

        case 5:
            cout << "Enter Employee ID to Delete: ";
            cin >> id;

            found = false;

            for (i = 0; i < n; i++)
            {
                if (empId[i] == id)
                {
                    for (int j = i; j < n - 1; j++)
                    {
                        empId[j] = empId[j + 1];
                        name[j] = name[j + 1];
                        department[j] = department[j + 1];
                        salary[j] = salary[j + 1];
                    }

                    n--;

                    cout << "Employee Deleted Successfully.\n";

                    found = true;
                    break;
                }
            }

            if (!found)
            {
                cout << "Employee Not Found.\n";
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