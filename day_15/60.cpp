// Write a program to Move zeroes to end.
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
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (num[i] != 0)
        {
            int t = num[i];
            num[i] = num[j];
            num[j] = t;
            j++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << num[i] << "  ";
    }
    return 0;
}