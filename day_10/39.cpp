/*Write a program to Print number pyramid.
    1
   121
  12321
 1234321
123454321
*/

#include<iostream>
using namespace std;

int main(){
    int i=1,j;
    for(i=1;i<=5;i++){
        for(j=1;j<=5-i;j++){
            cout<<" ";
        }
        for(j=1;j<=i;j++){
            cout<<j;
        }
        for(j=i-1;j>=1;j--){
            cout<<j;
        }
        cout<<endl;
    }
}