// Write a program to Check Armstrong number.

#include<iostream>
using namespace std;

int main(){
    int n,a,b,d,j,i=0,s=0;
    cout<<" enter the number:"<<endl;
    cin>>n;
    d=n;
    while(d>0){
        a=d%10;
        d=d/10;
       i++;
    }
    d=n;
    while(d>0){
        b=1;
        a=d%10;
        d=d/10;
        for(j=1;j<=i;j++){
            b=b*a;
          
        }
        s=s+b;
    
        
    }
    if(s==n){
        cout<<"The number is armstrong ";
    }
    else{
        cout<<"The number is not armstrong ";
    }
    return 0;
}