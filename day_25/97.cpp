// Write a program to Merge Two Sorted array
#include <iostream>
using namespace std;
int main()
{
    int n1, n2;
    cout << "enter number of terms in first array: ";
    cin >> n1;
    int array1[n1];
    cout << "enter terms of first sorted array"<<endl;
    for (int i = 0; i < n1; i++)
    {
        cout << "enter term " << i << ": ";
        cin >> array1[i];
    }
    cout << "enter number of terms in second array: ";
    cin >> n2;
    int array2[n2];
    cout << "enter terms of second sorted array"<<endl;
    for (int i = 0; i < n2; i++)
    {
        cout << "enter term " << i << ": ";
        cin >> array2[i];
    }
    int array3[n1 + n2];
    int i = 0, j = 0, k = 0;
    while (i < n1 && j < n2)
    {
        if (array1[i] < array2[j])
        {
            array3[k] = array1[i];
            i++;
        }
        else
        {
            array3[k] = array2[j];
            j++;
        }
        k++;
    }
    while (i < n1)
    {
        array3[k] = array1[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        array3[k] = array2[j];
        j++;
        k++;
    }
    cout << "after merging final array is: ";
    for (int i = 0; i < n1 + n2; i++)
    {
        cout << array3[i] << " ";
    }
    return 0;
}