// Write a program to Generate Fibonacci series.

#include<iostream>
using namespace std;
int main(){
    int a=0,b=1,c,i,n;
    cout<<"enter number of terms needed: "<<endl;
    cin>>n;
    for(i=1;i<=n;i++){
        cout<<a<<"\t";
        c=a+b;
        a=b;
        b=c;
    }
}