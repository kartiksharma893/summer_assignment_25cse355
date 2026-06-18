// Write a program to Binary search
#include <iostream>
using namespace std;
void sort_array(int array[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int minimum = i;
        for (int j = i + 1; j < n; j++)
        {
            if (array[j] < array[minimum])
            {
                minimum = j;
            }
        }
        swap(array[minimum], array[i]);
    }
}

int main()
{
    int n;
    cout << "enter number of terms in array: ";
    cin >> n;
    int num[n];
    for (int i = 0; i < n; i++)
    {
        cout << "enter term " << i + 1 << ": ";
        cin >> num[i];
    }
    sort_array(num, n);
    int s;
    cout << "enter the desired number: ";
    cin >> s;
    int low = 0, high = n - 1;
    int found = -1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (num[mid] == s)
        {
            found = mid;
            break;
        }
        else if (num[mid] > s)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    if (found != -1)
    {
        cout << "desired element found at: " << found + 1<<" according to ascending order";
    }
    else
    {
        cout << "element not found ";
    }
    return 0;
}
