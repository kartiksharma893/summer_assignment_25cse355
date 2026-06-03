//Write a program to Print multiplication table of a given number.
#include<iostream>
using namespace std;

int main(){
    int i,n;
    cout<<"enter the number"<<endl;
    cin>>n;
    for(i=1;i<=10;i++){
        cout<<n<<" X "<<i<<" = "<<n*i<<endl;
    }
}