// Write a program to Create student record management system.
#include <iostream>
#include <vector>
using namespace std;

class Student {
public:
    int rollNo;
    string name;
    float marks;
};

vector<Student> students;

void addStudent() {
    Student s;

    cout << "Enter Roll Number: ";
    cin >> s.rollNo;

    cout << "Enter Name: ";
    cin >> s.name;

    cout << "Enter Marks: ";
    cin >> s.marks;

    students.push_back(s);

    cout << "Student record added successfully!\n";
}

void displayStudents() {
    if (students.size() == 0) {
        cout << "No records found!\n";
        return;
    }

    cout << "\nRoll No\tName\tMarks\n";

    for (int i = 0; i < students.size(); i++) {
        cout << students[i].rollNo << "\t"
             << students[i].name << "\t"
             << students[i].marks << endl;
    }
}

void searchStudent() {
    int roll;
    cout << "Enter Roll Number to Search: ";
    cin >> roll;

    for (int i = 0; i < students.size(); i++) {
        if (students[i].rollNo == roll) {
            cout << "\nRecord Found\n";
            cout << "Roll No: " << students[i].rollNo << endl;
            cout << "Name: " << students[i].name << endl;
            cout << "Marks: " << students[i].marks << endl;
            return;
        }
    }

    cout << "Student record not found!\n";
}

void deleteStudent() {
    int roll;
    cout << "Enter Roll Number to Delete: ";
    cin >> roll;

    for (int i = 0; i < students.size(); i++) {
        if (students[i].rollNo == roll) {
            students.erase(students.begin() + i);
            cout << "Student record deleted successfully!\n";
            return;
        }
    }

    cout << "Student record not found!\n";
}

int main() {
    int choice;

    do {
        cout << "\n      Student Record Management System\n";
        cout << "1. Add Student\n";
        cout << "2. Display Students\n";
        cout << "3. Search Student\n";
        cout << "4. Delete Student\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                addStudent();
                break;
            case 2:
                displayStudents();
                break;
            case 3:
                searchStudent();
                break;
            case 4:
                deleteStudent();
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