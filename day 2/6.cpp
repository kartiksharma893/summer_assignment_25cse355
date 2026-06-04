//Write a program to Find reverse of a number

#include<iostream>
using namespace std;

int main(){
     int n,rev=0;
     cout<<"enter the number"<<endl;
     cin>>n;
     while (n>0)
     {
        rev=(rev*10)+(n%10);
        n=n/10;
     }
     cout<<"the number after getting reversed is "<<rev;
     
}