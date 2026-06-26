// Write a program to Create voting eligibility system
#include <iostream>
using namespace std;
int main()
{
    int age;
    cout << "enter your age: ";
    cin >> age;
    if (age >= 18)
    {
        cout << "you age eligible for voting ";
    }
    else
    {
        cout << "you are not eligible for voting ";
    }
    return 0;
}