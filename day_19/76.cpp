// Write a program to Find diagonal sum.
#include <iostream>
using namespace std;
int main()
{
    int r, c;
    cout << "enter number of rows: ";
    cin >> r;
    cout << "enter number of coloumn: ";
    cin >> c;
    int a[r][c];
    cout << "enter elements of matrix:- " << endl;
    int sum = 0;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (i == j)
            {
                sum = sum + a[i][j];
            }
        }
    }
    cout << "the digonal sum of matrix is " << sum;
    return 0;
}
