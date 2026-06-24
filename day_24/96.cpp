// Write a program to Remove duplicate characters
#include <iostream>
using namespace std;
int main()
{
    string a;
    cout << "Enter string: ";
    getline(cin, a);

    for (int i = 0; i < a.length(); i++)
    {
        for (int j = i + 1; j < a.length();)
        {
            if (a[i] == a[j])
            {
                a.erase(j, 1);
            }
            else
            {
                j++;
            }
        }
    }
    cout << "String after removing duplicates: " << a;
    return 0;
}