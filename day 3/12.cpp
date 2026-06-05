// Write a program to Find LCM of two numbers.
#include<iostream>
using namespace std;
 int main(){
    int a,b,i,lcm=0;
    cout<<"enter first number "<<endl;
    cin>>a;
    cout<<"enter second number "<<endl;
    cin>>b;
    for(i=1;i<=(a*b);i++){
        if((i%a)==0&&(i%b)==0){
            lcm=i;
            break;
        }
    }
    cout<<"the lcm of "<<a<<" and "<<b<<" is "<<lcm;
 }