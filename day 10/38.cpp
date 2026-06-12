/*Write a program to Print reverse pyramid.
*********
 *******
  *****
   ***
    *
*/

#include<iostream>
using namespace std;

int main(){
    int i,j;
    for(i=1;i<=5;i++){
        for(j=1;j<=i-1;j++){
            cout<<" ";
        }
        for(j=1;j<=2*(5-i)+1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}