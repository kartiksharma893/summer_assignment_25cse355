// Write a program to Character frequency.

#include <iostream>
using namespace std;
int main()
{
    string a;
    cout << "enter string: ";
    getline(cin, a);

    char b;
    cout << "enter the character: ";
    cin >> b;
    int frequency = 0;
    for (int i = 0; i < a.length(); i++)
    {
        if (a[i] == b)
        {
            frequency++;
        }
    }
    cout << "the frequency of the character is " << frequency;
    return 0;
}