// Write a program to Sort array in descending order
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
        cout << "enter term " << i << ": ";
        cin >> num[i];
    }
    for (int i = 0; i < n; i++)
    {
        int max = i;
        for (int j = i + 1; j < n; j++)
        {
            if (num[j] > num[max])
            {
                max = j;
            }
        }
        swap(num[i], num[max]);
    }
    cout << "array in descending order is:- ";
    for (int i = 0; i < n; i++)
    {
        cout << num[i] << "  ";
    }
    return 0;
}