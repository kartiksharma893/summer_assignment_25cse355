// Write a program to Print prime numbers in a range.

#include<iostream>
using namespace std;

int main(){
    int a,b,i,k,r;
    cout<<"enter the first term of range "<<endl;
    cin>>a;
    cout<<"enter the last term of range"<<endl;
    cin>>b;
    cout<<" prime numbers between "<<a<<" and "<<b<<" are: "<<endl;
    for(i=a;i<=b;i++){
        if(i<2){
            continue;
        }
        for(k=2;k<i;k++){
            r=i%k;
            if(r==0){
                break;
            }
       
        }
      if(k==i){
        cout<<i<<"\t";
        }
    }
}