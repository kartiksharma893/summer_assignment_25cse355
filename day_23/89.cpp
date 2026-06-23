// Write a program to Find first non-repeating character.
#include <iostream>
using namespace std;
int main()
{
    string a;
    cout << "enter the string: ";
    getline(cin, a);

    cout << "the first non repeating character is ";
    for (int i = 0; i < a.length(); i++)
    {
        bool repeated = false;
        for (int j = 0; j < a.length(); j++)
        {
            if ((a[i] == a[j]) && (i != j))
            {
                repeated = true;
                break;
            }
        }
        if (repeated != true)
        {
            cout << a[i];
            return 0;
        }
        
    }
    cout << "none";
    return 0;
}