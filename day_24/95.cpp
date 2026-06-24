// Write a program to Find longest word

#include <iostream>
using namespace std;

int main()
{
    string a;
    cout << "Enter a sentence: ";
    getline(cin, a);

    string longest = "", word = "";

    for (int i = 0; i <= a.length(); i++)
    {
        if (i == a.length() || a[i] == ' ')
        {
            if (word.length() > longest.length())
            {
                longest = word;
            }
            word = "";
        }
        else
        {
            word += a[i];
        }
    }

    cout << "Longest word: " << longest;

    return 0;
}