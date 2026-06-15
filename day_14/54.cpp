// Write a program to Frequency of an element.

#include<iostream>
using namespace std;

int main(){
    int n,s,count=0;
    cout<<"enter number of terms: ";
    cin>>n;
    int num[n];
    for(int i=0;i<n;i++){
        cout<<"enter term "<<i+1<< ": ";
        cin>>num[i];
    }
    cout<<"enter the element: ";
    cin>>s;
    for(int i=0;i<n;i++){
        if(num[i]==s){
            count++;
        }
    }
    cout<<"the frequency of "<<s<<" is "<<count;
    return 0;
}
