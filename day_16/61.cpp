// Write a program to Find missing number in array

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter number of terms ";
    cin >> n;
    int num[n];
    for (int i = 0; i < n; i++)
    {
        cout << "enter term " << i + 1 << ": ";
        cin >> num[i];
    }
    int array_sum = 0;
    for (int i = 0; i < n; i++)
    {
        array_sum = array_sum + num[i];
    }

    int sum = (n + 1) * (2 + n) / 2;
    cout << "the missing number is " << sum - array_sum;
    return 0;
}