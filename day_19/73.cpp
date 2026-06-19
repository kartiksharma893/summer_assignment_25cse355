// Write a program to Add matrices
#include <iostream>
using namespace std;
int main()
{
    int r, c;
    cout << "enter number of rows: ";
    cin >> r;
    cout << "enter number of coloumns: ";
    cin >> c;
    int a[r][c], b[r][c], sum[r][c];
    cout << "enter values for first matrix:-" << endl;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> a[i][j];
        }
    }
    cout << "\nenter values for second matrix:- " << endl;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> b[i][j];
        }
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }
    cout << "the sum of both matrices is:- " << endl;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << sum[i][j] << "  ";
        }
        cout << endl;
    }
    return 0;
}