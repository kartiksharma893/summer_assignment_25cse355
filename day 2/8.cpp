//Write a program to Check whether a number is palindrome

#include<iostream>
using namespace std;

int main(){
    int n,a,b=0;
    cout<<"enter the number "<<endl;
    cin>>n;
    a=n;
    while(a>0){
        b=(b*10)+(a%10);
        a=a/10;
    }
    if(n==b){
        cout<<"the number is palindrome";
    }
     else{
            cout<<"the number is not palindrome ";
        }
}