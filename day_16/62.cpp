// Write a program to Find maximum frequency element.
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
    int max_frequency = 0, element;
    for (int i = 0; i < n; i++)
    {
        int a = 0;
        for (int j = 0; j < n; j++)
        {
            if (num[i] == num[j])
            {
                a++;
            }
        }
        if (a > max_frequency)
        {
            max_frequency = a;
            element = num[i];
        }
    }
    cout << "in given array " << element << " has highest frequency that is " << max_frequency;
    return 0;
}
