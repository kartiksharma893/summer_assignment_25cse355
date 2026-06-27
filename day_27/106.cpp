// Write a program to Create employee management system.
#include <iostream>
#include <vector>
using namespace std;

class Employee {
public:
    int empId;
    string name;
    float salary;
};

vector<Employee> employees;

void addEmployee() {
    Employee e;

    cout << "Enter Employee ID: ";
    cin >> e.empId;

    cout << "Enter Employee Name: ";
    cin >> e.name;

    cout << "Enter Salary: ";
    cin >> e.salary;

    employees.push_back(e);

    cout << "Employee record added successfully!\n";
}

void displayEmployees() {
    if (employees.size() == 0) {
        cout << "No records found!\n";
        return;
    }

    cout << "\nID\tName\tSalary\n";

    for (int i = 0; i < employees.size(); i++) {
        cout << employees[i].empId << "\t"
             << employees[i].name << "\t"
             << employees[i].salary << endl;
    }
}

void searchEmployee() {
    int id;

    cout << "Enter Employee ID to Search: ";
    cin >> id;

    for (int i = 0; i < employees.size(); i++) {
        if (employees[i].empId == id) {
            cout << "\nRecord Found\n";
            cout << "Employee ID: " << employees[i].empId << endl;
            cout << "Name: " << employees[i].name << endl;
            cout << "Salary: " << employees[i].salary << endl;
            return;
        }
    }

    cout << "Employee record not found!\n";
}

void deleteEmployee() {
    int id;

    cout << "Enter Employee ID to Delete: ";
    cin >> id;

    for (int i = 0; i < employees.size(); i++) {
        if (employees[i].empId == id) {
            employees.erase(employees.begin() + i);
            cout << "Employee record deleted successfully!\n";
            return;
        }
    }

    cout << "Employee record not found!\n";
}

int main() {
    int choice;

    do {
        cout << "\n     Employee Management System\n";
        cout << "1. Add Employee\n";
        cout << "2. Display Employees\n";
        cout << "3. Search Employee\n";
        cout << "4. Delete Employee\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                addEmployee();
                break;
            case 2:
                displayEmployees();
                break;
            case 3:
                searchEmployee();
                break;
            case 4:
                deleteEmployee();
                break;
            case 5:
                cout << "Exiting Program...\n";
                break;
            default:
                cout << "Invalid Choice!\n";
        }

    } while (choice != 5);

    return 0;
}