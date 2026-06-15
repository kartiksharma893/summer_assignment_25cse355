// Write a program to Count even and odd elements.

#include<iostream>
using namespace std;
int main(){
    int n,even=0,odd=0;
    cout<<"enter number of terms : ";
    cin>>n;
    int num[n];
    for(int i=0;i<n;i++){
        cout<<" enter term "<<i+1<<": ";
        cin>>num[i];
    }
    for(int i=0;i<n;i++){
        if(num[i]%2==0){
            even++;
        }
        else{
            odd++;
        }
    }
    cout<<"there are "<<even<<" even terms and "<<odd<<" odd terms";
    
    return 0;
}