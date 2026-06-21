// Write a program to Count vowels and consonants.
#include <iostream>
using namespace std;
int main()
{
    string a;
    cout << "enter the string: ";
    getline(cin, a);
    int vowel = 0, consonant = 0;
    for (int i = 0; i < a.length(); i++)
    {
        char ch = tolower(a[i]);
        if (ch >= 'a' && ch <= 'z')
        {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            {
                vowel++;
            }
            else
            {
                consonant++;
            }
        }
    }
    cout << "in the given string:- \nvowels: " << vowel << "\nconsonants: " << consonant;
    return 0;
}