// Write a program to Write function for Armstrong.
#include<iostream>
using namespace std;

bool is_armstrong(int n){
    int digits=0;
    int original=n;
    int temp=n;
    while(n>0){
        n=n/10;
        digits++;
        
    }
    int sum=0;
 
    while(original>0){
           int product=1;
        int r=original%10;
        
        for(int i=0;i<digits;i++){
            product=product*r;
        }
        sum=sum+product;
        original=original/10;

    }
    return sum==temp;
}

int main(){
    int x;
    cout<<"enter the number"<<endl;
    cin>>x;
    bool a=is_armstrong(x);
    if(a==1){
        cout<<x<<" is an armstrong number";
    }
    else{
        cout<<x<<" is not an armstrong number ";
    }
    return 0;
}