// Write a program to Convert binary to decimal.

#include<iostream>
using namespace std;

int main(){
    int n,r,d=0,s,t=1,o;
    cout<<"enter the binary number "<<endl;
    cin>>n;
    o=n;
    while(n>0){
        r=n%10;
        s=r*t;
        d=d+s;
        t=t*2;
        n=n/10;
    }

    cout<<o<<" in binary form is "<<d;
    return 0;
}