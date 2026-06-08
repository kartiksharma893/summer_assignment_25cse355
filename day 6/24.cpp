// Write a program to Find x^n without pow().
#include<iostream>
using namespace std;

int main(){
    int x,n,p=1;
    cout<<"enter value of x"<<endl;
    cin>>x;
    cout<<"enter value of n"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++){
        p=p*x;
    }
    cout<<" value of "<<x<<" ^ "<<n<<" is "<<p;
    return 0;
}