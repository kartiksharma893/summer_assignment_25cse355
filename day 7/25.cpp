//Write a program to Recursive factorial

#include<iostream>
using namespace std;

int fact(int n){
    if(n<2){
        return 1;
    }
    return n*fact(n-1);
}

int main(){
    int x;
    cout<<" enter the number "<<endl;
    cin>>x;
    cout<<" the factorial of "<<x<<" is: "<<fact(x);
    return 0;

}