//Write a program to Find product of digits.	

#include<iostream>
using namespace std;

int main(){
    int n,product=1;
    cout<<"enter the number "<<endl;
    cin>>n;
    while(n>0){
        product=product*(n%10);
        n=n/10;
    }
    cout<<"the product of digits on number is "<<product;
}