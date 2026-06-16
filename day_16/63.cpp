// Write a program to Find pair with given sum

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
    int sum;
    bool found = false;
    cout << "enter the desired sum: ";
    cin >> sum;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (num[i] + num[j] == sum)
            {
                cout << " pair found: " << num[i] << " + " << num[j] << " = " << sum << endl;
                found = true;
            }
        }
    }
    if (found != true)
    {
        cout << "no pair found";
    }
    return 0;
}