/*Write a program to Print repeated character pattern.
A
BB
CCC
DDDD
EEEEE
*/

#include<iostream>
using namespace std;

int main(){
    int i,j;
    for(i=1;i<=5;i++){
        for(j=1;j<=i;j++){
            cout<<char(65+i-1);
        }
        cout<<endl;
    }
}