// Write a program to Write function for Fibonacci
#include<iostream>
using namespace std;

int fibo(int n){
    if(n==1){
        return 0;
    }
    if(n==2){
        return 1;
    }
    return fibo(n-1)+fibo(n-2);
}
int main(){
    int n;
    cout<<"enter no. of terms "<<endl;
    cin>>n;
    for(int i=1;i<=n;i++){
        cout<<fibo(i)<<"\t";
        
    }
    return 0;
}