// Write a program to Find sum and average of array

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter number of terms :";
    cin>>n;
    int num[n];
    for(int i=0;i<n;i++){
        cout<<"enter term "<<i+1<<" : ";
        cin>>num[i];
    }
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+num[i];
    }
    int avg=sum/n;
    cout<<"sum is "<<sum<<" and average is "<<avg;
    
    return 0;
}