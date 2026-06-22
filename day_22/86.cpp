// Write a program to Count words in a sentence.
#include <iostream>
using namespace std;
int main()
{
    string a;
    int count = 0;
    cout << "enter the string: ";
    getline(cin, a);
    for (int i = 0; i < a.length(); i++)
    {
        if ((i == 0 && a[i] != ' ') || a[i] != ' ' && a[i - 1] == ' ')
        {
            count++;
        }
    }
    cout << "there are " << count << " words in sentence ";
    return 0;
}