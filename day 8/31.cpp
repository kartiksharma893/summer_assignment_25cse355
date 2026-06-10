/*Write a program to Print character triangle.
A
AB
ABC
ABCD
ABCDE
*/

#include<iostream>
using namespace std;

int main(){
    int i,j;
    for(i=1;i<=5;i++){
        for(j=1;j<=i;j++){
            cout<<char(65 + (j-1));
        }
        cout<<endl;
    }
    return 0;
}