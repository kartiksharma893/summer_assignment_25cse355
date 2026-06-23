// Write a program to Check anagram strings.
#include <iostream>
using namespace std;
int main()
{
    string a, b;
    cout << "enter string 1: ";
    cin >> a;
    cout << "enter string 2: ";
    cin >> b;
    char t;
    for (int j = 0; j < a.length() - 1; j++)
    {
        for (int i = 0; i < a.length() - 1; i++)
        {
            if (a[i] > a[i + 1])
            {
                t = a[i];
                a[i] = a[i + 1];
                a[i + 1] = t;
            }
        }
    }
    for (int j = 0; j < b.length() - 1; j++)
    {
        for (int i = 0; i < b.length() - 1; i++)
        {
            if (b[i] > b[i + 1])
            {
                t = b[i];
                b[i] = b[i + 1];
                b[i + 1] = t;
            }
        }
    }
    if (a == b)
    {
        cout << "the strings are anagram";
    }
    else
    {
        cout << "the strings are not anagram";
    }
    return 0;
}