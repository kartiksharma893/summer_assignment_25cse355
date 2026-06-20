// Write a program to Multiply matrices
#include <iostream>
using namespace std;
int main()
{
    int r1, c, c2;
    cout << "enter number of rows in first matrix: ";
    cin >> r1;
    cout << "enter number of coloumn in first matrix: ";
    cin >> c;
    int m1[r1][c];
    cout << "\n enter values in first elements\n";
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> m1[i][j];
        }
    }
    cout << "\n\nfor multiplication of matrices number of coloumn of first matrix should be equal to number of rows of second matrix \n\n ";
    cout << "enter number of coloumn of second matrix: ";
    cin >> c2;
    cout << "\n enter values of second matrix\n";
    int m2[c][c2];
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            cin >>m2[i][j];
        }
    }
    int product[r1][c2];
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            product[i][j]=0;
        }
    }
    
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            for(int k=0;k<c;k++){
                product[i][j]+=m1[i][k]*m2[k][j];
            }
        }
    }
    cout<<"\nthe multiplication of both atrices is:-\n";
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            cout<<product[i][j]<<"\t";
        }
        cout<<endl;
    }
    return 0;
}