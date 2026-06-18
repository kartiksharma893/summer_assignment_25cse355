// Write a program to Selection sort.
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter number of terms in array: ";
    cin >> n;
    int num[n];

    for (int i = 0; i < n; i++)
    {
        cout << "enter term " << i+1 << ": ";
        cin >> num[i];
    }

    for (int i = 0; i < n; i++)
    {
        int minimum = i;
        for (int j = i + 1; j < n; j++)
        {
            if (num[j] < num[minimum])
            {
                minimum = j;
            }
        }
        swap(num[i], num[minimum]);
    }
    cout<<"the array after selection sort is:-"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout << num[i] << "  ";
    }
    return 0;
}