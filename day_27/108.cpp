//Write a program to Create marksheet generation system.
#include <iostream>
#include <vector>
using namespace std;

class Student
{
public:
    int rollNo;
    string name;
    float marks1, marks2, marks3;
    float total, percentage;
};

vector<Student> students;

void addStudent()
{
    Student s;

    cout << "Enter Roll Number: ";
    cin >> s.rollNo;

    cout << "Enter Student Name: ";
    cin >> s.name;

    cout << "Enter Marks in Subject 1: ";
    cin >> s.marks1;

    cout << "Enter Marks in Subject 2: ";
    cin >> s.marks2;

    cout << "Enter Marks in Subject 3: ";
    cin >> s.marks3;

    s.total = s.marks1 + s.marks2 + s.marks3;
    s.percentage = s.total / 3;

    students.push_back(s);

    cout << "Marksheet Added Successfully!\n";
}

void displayMarksheets()
{
    if (students.size() == 0)
    {
        cout << "No Records Found!\n";
        return;
    }

    cout << "\nRollNo\tName\tTotal\tPercentage\n";

    for (int i = 0; i < students.size(); i++)
    {
        cout << students[i].rollNo << "\t"
             << students[i].name << "\t"
             << students[i].total << "\t"
             << students[i].percentage << "%" << endl;
    }
}

void searchStudent()
{
    int roll;

    cout << "Enter Roll Number to Search: ";
    cin >> roll;

    for (int i = 0; i < students.size(); i++)
    {
        if (students[i].rollNo == roll)
        {
            cout << "\nRecord Found\n";
            cout << "Roll Number: " << students[i].rollNo << endl;
            cout << "Name: " << students[i].name << endl;
            cout << "Total Marks: " << students[i].total << endl;
            cout << "Percentage: " << students[i].percentage << "%" << endl;
            return;
        }
    }

    cout << "Record Not Found!\n";
}

void deleteStudent()
{
    int roll;

    cout << "Enter Roll Number to Delete: ";
    cin >> roll;

    for (int i = 0; i < students.size(); i++)
    {
        if (students[i].rollNo == roll)
        {
            students.erase(students.begin() + i);
            cout << "Record Deleted Successfully!\n";
            return;
        }
    }

    cout << "Record Not Found!\n";
}

int main()
{
    int choice;

    do
    {
        cout << "\n Marksheet Generation System \n";
        cout << "1. Add Marksheet\n";
        cout << "2. Display Marksheets\n";
        cout << "3. Search Student\n";
        cout << "4. Delete Marksheet\n";
        cout << "5. Exit\n";
        cout << "Enter Choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                addStudent();
                break;

            case 2:
                displayMarksheets();
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

    } while(choice != 5);

    return 0;
}