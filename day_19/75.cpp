// Write a program to Transpose matrix.
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
    cout<<"enter values of matrix:-"<<endl;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> a[i][j];
        }
    }
    cout << "the transpose of this matrix is :-"<<endl;
    for (int j = 0; j < c; j++)
    {
        for (int i = 0; i < r; i++)
        {
            cout << a[i][j] << "  ";
        }
        cout << endl;
    }
    return 0;
}