// Write a program to Input and display array.
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << " enter number of terms in array ";
    cin >> n;
    int num[n];
    for (int i = 0; i < n; i++)
    {
        cout << "enter term " << i + 1 << " : ";
        cin >> num[i];
    }
    cout << endl
         << endl;
    cout << "the elements of array are : ";
    for (int i = 0; i < n; i++)
    {
        cout << num[i]<<" ";
    }
    return 0;
}