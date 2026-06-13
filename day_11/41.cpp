// Write a program to Write function to find sum of two numbers.

#include<iostream>
using namespace std;

int add(int x,int y){
    return x+y;
}

int main(){
    int a,b;
    cout<<" enter the first number"<<endl;
    cin>>a;
     cout<<" enter the second number"<<endl;
    cin>>b;
    int sum=add(a,b);
    cout<<"the sum of both numbers is "<<sum;
    
}