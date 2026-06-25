// Write a program to Sort names alphabetically.
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter number of names: ";
    cin >> n;
    string names[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter name " << i + 1 << ": ";
        cin >> names[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (names[j] > names[j + 1])
            {
                string t = names[j];
                names[j] = names[j + 1];
                names[j + 1] = t;
            }
        }
    }
    cout << "\nNames in alphabetical order are:-\n";
    for (int i = 0; i < n; i++)
    {
        cout << names[i] << endl;
    }
    return 0;
}