// Write a program to Check string rotation.

#include <iostream>
using namespace std;

int main()
{
    string str1, str2;

    cout << "Enter first string: ";
    cin >> str1;

    cout << "Enter second string: ";
    cin >> str2;

    if (str1.length() != str2.length())
    {
        cout << "Not a rotation";
        return 0;
    }

    bool found = false;

    for (int i = 0; i < str1.length(); i++)
    {
        string rotated = str1.substr(i) + str1.substr(0, i);

        if (rotated == str2)
        {
            found = true;
            break;
        }
    }

    if (found)
        cout << "String is a rotation";
    else
        cout << "String is not a rotation";

    return 0;
}