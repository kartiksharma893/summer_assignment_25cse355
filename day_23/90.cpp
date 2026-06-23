// Write a program to Find first repeating character.
#include <iostream>
using namespace std;
int main()
{
    string a;
    cout << "enter the string: ";
    getline(cin, a);

    cout << "the first repeating character is ";
    for (int i = 0; i < a.length(); i++)
    {
        for (int j = i + 1; j < a.length(); j++)
        {
            if (a[i] == a[j])
            {
                cout << a[i];
                return 0;
            }
        }
    }

    return 0;
}