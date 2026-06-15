// Write a program to Reverse array.

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter number of terms: ";
    cin >> n;
    int num[n];
    for (int i = 0; i < n; i++)
    {
        cout << "enter term " << i + 1 << ": ";
        cin >> num[i];
    }

    for (int i = 0; i < n/2; i++)
    {
        int t = num[i];
        num[i] = num[n - 1 - i];
        num[n - 1 - i] = t;
    }

    for (int i = 0; i < n; i++)
    {
        cout << num[i] << "  ";
    }
}
