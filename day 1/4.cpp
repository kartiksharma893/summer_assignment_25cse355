//Write a program to Count digits in a number.

#include<iostream>
using namespace std;

int main(){
    int n,i=0;
    cout<<"enter the digit"<<endl;
    cin>>n;

    //if number is 0

     if(n==0){
        i=1;}

    //if number is negative 

    if(n<0){
        n=n*-1;
        while(n>0){
             n=n/10;
             i++;
        }

    }

    //if number is positive
    while(n>0){
        n=n/10;
        i++;
        
    }
    
    cout<<"the number of digits in given number are "<<i;
    

}