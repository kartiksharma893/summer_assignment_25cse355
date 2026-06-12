/*Write a program to Print character pyramid.
    A
   ABA
  ABCBA
 ABCDCBA
ABCDEDCBA
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
            cout<<char(64+j);
        }
        for(j=i-1;j>=1;j--){
            cout<<char(64+j);
        }
        cout<<endl;
    }
}