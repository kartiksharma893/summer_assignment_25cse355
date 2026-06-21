// Write a program to Convert lowercase to uppercase.
#include <iostream>
using namespace std;
int main()
{
    string a;
    cout << "enter string: ";
    getline(cin, a);
    for (int i = 0; i < a.length(); i++)
    {
        if (a[i] >= 'a' && a[i] <= 'z')
        {
            a[i] = a[i] - 32;
        }
    }
    cout << "uppercase string is " << a;
    return 0;
}