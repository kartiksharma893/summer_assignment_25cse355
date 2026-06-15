// Write a program to Rotate array left.

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter number of terms: ";
    cin>>n;
    int num[n];
    for(int i=0;i<n;i++){
        cout<<" enter term "<<i+1<<": ";
        cin>>num[i];
    }
    int t=num[0];
    for(int i=0;i<n-1;i++){
        num[i]=num[i+1];
    }
    num[n-1]=t;
    for(int i=0;i<n;i++){
        cout<<num[i]<<"  ";
    }
}