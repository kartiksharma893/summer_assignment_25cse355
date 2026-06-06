//Write a program to Find nth Fibonacci term.

#include<iostream>
using namespace std;

int main(){
    int n,a=0,b=1,c,i;
    cout<<"enter the value of n "<<endl;
    cin>>n;
    if(n==1){
        a=0;
    }
    else{
    for(i=2;i<n;i++){
         c=a+b;
         a=b;
         b=c;
    }
    }
    cout<<"the "<<n<<" term in fibonacci series is "<<a;
}