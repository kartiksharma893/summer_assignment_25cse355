// Write a program to Find row-wise sum.
#include<iostream>
using namespace std;
int main(){
    int r,c;
    cout<<"enter number of rows of matrix: ";
    cin>>r;
    cout<<"enter number of coloumns of matrix: ";
    cin>>c;
    int m[r][c];
    cout<<"\n\n enter elements in matrix:- \n\n";
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>m[i][j];
        }
    }
    cout<<"the row wise sum is:- \n\n";
    for(int i=0;i<r;i++){
        int sum=0;
        for(int j=0;j<c;j++){
            sum+=m[i][j];
        }
        cout<<"the sum of row "<<i+1<<" is "<<sum<<endl;
    }
    return 0;
}