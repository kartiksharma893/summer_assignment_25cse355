// Write a program to Bubble sort

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number of terms: ";
    cin>>n;
    int num[n];
    for(int i=0;i<n;i++){
        cout<<"enter term "<<i+1<<": ";
        cin>>num[i];
    }
    int t;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(num[j]>num[j+1]){
                t=num[j];
                num[j]=num[j+1];
                num[j+1]=t;
            }
        }
    }
    cout<<"after bubble sort array is: ";
    for(int i=0;i<n;i++){
        cout<<num[i]<<"  ";
    }
    return 0;
}