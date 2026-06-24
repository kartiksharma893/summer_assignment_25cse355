// Write a program to Compress a string

#include <iostream>
using namespace std;

int main()
{
    string a;
    cout << "Enter string: ";
    getline(cin, a);

    for (int i = 0; i < a.length();)
    {
        int count = 1;

        while (i + count < a.length() && a[i] == a[i + count])
        {
            count++;
        }

        cout << a[i] << count;

        i += count;
    }

    return 0;
}