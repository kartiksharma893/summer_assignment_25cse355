// Write a program to Remove spaces from string.

#include <iostream>
using namespace std;
int main()
{
    string a;
    cout << "enter string: ";
    getline(cin, a);
    int n = a.length(), j = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] != ' ')
        {

            a[j] = a[i];
            j++;
        }
    }
    a.resize(j);
    cout << "after removal of spaces the string is:-\n"
         << a;
    return 0;
}