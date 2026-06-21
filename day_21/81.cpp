// Write a program to Find string length without strlen().
#include<iostream>
using namespace std;
int main(){
    string a;
    cout<<"enter the string: ";
    getline(cin,a);
    int length=0;
    for(int i=0;a[i]!='\0';i++){
        length++;
    }
    cout<<"length of string is: "<<length;
    return 0;
}