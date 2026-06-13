// Write a program to Write function to find factorial
#include<iostream>
using namespace std;

int fact(int n){
     int factorial= 1;
    for(int i=1;i<=n;i++){
       factorial=factorial*i;
    }
    return factorial;
}

int main(){
    int a;
    cout<<"enter the number "<<endl;
    cin>>a;
    cout<<" the factorial of "<<a<<" is "<<fact(a);
    return 0;
}