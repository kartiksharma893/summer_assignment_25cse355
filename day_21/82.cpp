// Write a program to Reverse a string. 
#include<iostream>
using namespace std;
int main(){
    string a;
    cout<<"enter the string: ";
    getline(cin,a);
    int b=a.length();
    for(int i=0;i<b/2;i++){
        swap(a[i],a[b-i-1]);
    }
    cout<<"after getting reversed the string is: "<<a;
    return 0;
}