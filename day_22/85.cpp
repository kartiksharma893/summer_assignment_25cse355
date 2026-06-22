// Write a program to Check palindrome string.
#include<iostream>
using namespace std;
int main(){
    string a;
    cout<<"enter string: ";
    cin>>a;
    int n=a.length();
    string b;
    for(int i=n-1;i>=0;i--){
        b+=a[i];
    }
    if(a==b){
        cout<<"string is palindrome ";
    }
    else{
        cout<<"string is not palindrome";
    }
    return 0;
}