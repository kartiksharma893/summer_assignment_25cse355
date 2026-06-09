// Write a program to Recursive Fibonacci.

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
    int x;
    cout<<" enter number of terms "<<endl;
    cin>>x;
    for(int i=1;i<=x;i++){
        cout<<fibo(i)<<"\t";
    }
    return 0;
}

