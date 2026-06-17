// Write a program to Find common elements.

#include <iostream>
using namespace std;
int main()
{
    int n1;
    cout << "enter number of terms in first array: ";
    cin >> n1;
    int num1[n1];
    cout << "enter values in first array:- " << endl;
    for (int i = 0; i < n1; i++)
    {
        cout << "enter term " << i + 1 << ": ";
        cin >> num1[i];
    }
    int n2;
    cout << "enter number of terms in second array:- ";
    cin >> n2;
    int num2[n2];
    cout << "enter values in second array:-" << endl;
    for (int i = 0; i < n2; i++)
    {
        cout << "enter term " << i + 1 << ": ";
        cin >> num2[i];
    }
    bool common = false;
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            if (num1[i] == num2[j])
            {
                cout << num1[i] << "  ";
                common = true;
            }
        }
    }
    if (common != true)
    {
        cout << "no common element";
    }
    return 0;
}