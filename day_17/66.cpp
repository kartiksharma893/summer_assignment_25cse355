// Write a program to Union of arrays.
#include <iostream>
using namespace std;

int main()
{
    int n1;
    cout << "enter number of terms in first array: ";
    cin >> n1;
    int array_1[n1];
    cout << "enter values of first array:- " << endl;
    for (int i = 0; i < n1; i++)
    {
        cout << "enter term " << i + 1 << ": ";
        cin >> array_1[i];
    }
    int n2;
    cout << endl
         << endl
         << "enter number of terms of second array: ";
    cin >> n2;
    int array_2[n2];
    cout << "enter values of second array" << endl;
    for (int i = 0; i < n2; i++)
    {
        cout << "enter term " << i + 1 << ": ";
        cin >> array_2[i];
    }
    int n = n1 + n2;
    int array[n];
    for (int i = 0; i < n1; i++)
    {
        array[i] = array_1[i];
    }
    for (int i = 0; i < n2; i++)
    {
        array[i + n1] = array_2[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n;)
        {
            if (array[i] == array[j])
            {
                for (int k = j; k < n - 1; k++)
                {
                    array[k] = array[k + 1];
                }
                n--;
            }
            else
            {
                j++;
            }
        }
    }
    cout<<"after union array is: ";
    for(int i=0;i<n;i++){
        cout<<array[i]<<"  ";
    }
    return 0;
}