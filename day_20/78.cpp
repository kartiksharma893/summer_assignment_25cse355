// Write a program to Check symmetric matrix
#include <iostream>
using namespace std;
int main()
{
    int r, c;
    cout << "enter number of rows: ";
    cin >> r;
    cout << "enter number of coloumns: ";
    cin >> c;
    int a[r][c];
    cout << "enter values of matrix:-" << endl;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> a[i][j];
        }
    }
    if (r == c)
    {
        int b[c][r];
        for (int j = 0; j < c; j++)
        {
            for (int i = 0; i < r; i++)
            {
                b[j][i] = a[i][j];
            }
        }
        bool symmetric = true;
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                if (a[i][j] != b[i][j])
                {
                    symmetric = false;
                    break;
                }
            }
        }
        if (symmetric == false)
        {
            cout << "the matrix is not symmetric";
        }
        else
        {
            cout << "the matrix is symmetric";
        }
    }
    else
    {
        cout << "given matrix is not symmetric";
    }
    return 0;
}