// Write a program to Rotate array right



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
    int t=num[n-1];
    for(int i=n-1;i>0;i--){
        num[i]=num[i-1];
    }
    num[0]=t;
    
    for(int i=0;i<n;i++){
        cout<<num[i]<<"  ";
    }
}