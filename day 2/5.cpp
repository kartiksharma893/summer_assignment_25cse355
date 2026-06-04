//Write a program to Find sum of digits of a number

#include<iostream>
using namespace std;

int main(){
    cout<<"enter the number"<<endl;
    int n,sum=0;
    cin>>n;
    while(n>0){
        sum=sum+n%10;
        n=n/10;
    }
    cout<<"Sum of digits: "<<sum<<endl;

}
