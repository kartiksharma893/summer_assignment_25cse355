// Write a program to Find largest and smallest element
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
    int i,j,t;
    for(i=0;i<n-1;i++){
        for(j=0;j<n-1-i;j++){
            if(num[j]>num[j+1]){
                t=num[j];
                num[j]=num[j+1];
                num[j+1]=t;
            }
        }
    }
    cout<<"the largest element is "<<num[i]<<" smallest element is "<<num[0];
    
    return 0;
}