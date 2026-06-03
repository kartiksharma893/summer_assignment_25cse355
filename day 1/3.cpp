//Write a program to Find factorial of a number.
#include<iostream>
using namespace std;

int factorial(int n){
    if(n<2){
        return 1;
    }
    return n*factorial(n-1);
}
int main(){
    int n,f;
    cout<<"enter digit"<<endl;
    cin>>n;
    f=factorial(n);
    cout<<"the factorial of "<<n<<" is "<<f;
    return 0;
}