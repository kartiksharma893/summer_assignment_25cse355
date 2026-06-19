// Write a program to Subtract matrices.
#include <iostream>
using namespace std;
int main()
{
    int r, c;
    cout << "enter number of rows: ";
    cin >> r;
    cout << "enter number of coloumns: ";
    cin >> c;
    int a[r][c], b[r][c],substraction[r][c];
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
        substraction[i][j] = a[i][j] - b[i][j];
        }
    }
    cout << "the substraction of both matrix is:- " << endl;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout <<substraction[i][j] << "  ";
        }
        cout << endl;
    }
    return 0;
}