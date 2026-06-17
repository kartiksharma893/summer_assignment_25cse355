// Write a program to Merge arrays.

#include <iostream>
using namespace std;

int main()
{
    int n1;
    cout << "enter number of terms in first array: ";
    cin >> n1;
    int array_1[n1];
    cout << "enter values of first array:- " << endl;
    for (int i = 0; i < n1; i++)
    {
        cout << "enter term " << i + 1 << ": ";
        cin >> array_1[i];
    }
    int n2;
    cout << endl
         << endl
         << "enter number of terms of second array: ";
    cin >> n2;
    int array_2[n2];
    cout << "enter values of second array" << endl;
    for (int i = 0; i < n2; i++)
    {
        cout << "enter term " << i + 1 << ": ";
        cin >> array_2[i];
    }
    int n = n1 + n2;
    int array[n];
    for (int i = 0; i < n1; i++)
    {
        array[i] = array_1[i];
    }
    for (int i = 0; i < n2; i++)
    {
        array[i + n1] = array_2[i];
    }
    cout << "after merging final array formed is: ";
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << "  ";
    }
    return 0;
}