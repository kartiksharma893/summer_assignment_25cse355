// Write a program to Write function to find maximum.
#include<iostream>
using namespace std;

int max(int a,int b){
    if(a<b){
        return b;
    }
    else{
        return a;
    }
}
int main(){
    int x,y;
    cout<<"enter the first number"<<endl;
    cin>>x;
    cout<<"enter the second number "<<endl;
    cin>>y;
    cout<<"the maximum number among both is "<<max(x,y);
    return 0;
}