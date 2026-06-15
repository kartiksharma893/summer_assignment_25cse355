// Write a program to Find duplicates in array.

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter number of terms: ";
    cin>>n;
    int num[n];
    for(int i=0;i<n;i++){
        cout<<"enter term "<<i+1<<" :";
        cin>>num[i];
    }
    cout<<"the duplicate elements are: ";
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(num[i]==num[j]){
                cout<<num[i]<<" ";
            }
        }
    }
    return 0;
}