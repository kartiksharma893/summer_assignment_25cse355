// Write a program to Linear search.

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number of terms ";
    cin>>n;
    int num[n];
    for(int i=0;i<n;i++){
        cout<<"enter term "<<i+1<<" :";
        cin>>num[i];
    }
    int s;
    cout<<" enter the desired number:";
    cin>>s;
    bool found=false;
    for(int i=0;i<n;i++){
        if (s==num[i]){
           cout<<" desired number found at "<<i<<endl;
           found=true;
        }
       
    }
    if(found==false){
        cout<<"number not found";
       }
    return 0;
}