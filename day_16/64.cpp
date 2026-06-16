// Write a program to Remove duplicates from array.

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

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n;)
        {
            if (num[i] == num[j])
            {
                for (int k = j; k < n - 1; k++)
                {
                    num[k] = num[k + 1];
                }
                n--;
            }
            else
            {
                j++;
            }
        }
    }
    cout << "array after removing duplicates is " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << num[i] << "  ";
    }
    return 0;
}