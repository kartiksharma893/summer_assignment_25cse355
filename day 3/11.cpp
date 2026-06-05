// Write a program to Find GCD of two numbers
#include<iostream>
using namespace std;

int main(){
    int a,b,i=1,gcd=1;
    cout<<"enter the first number"<<endl;
    cin>>a;
    cout<<"enter the second number"<<endl;
    cin>>b;

    while((i<=a)&&(i<=b)){
        if(((a%i)==0)&&((b%i)==0)){
            gcd=i;
        }
        i++;
    }
    cout<<"the GCD of "<<a<<" and "<<b<<" is "<<gcd;
}