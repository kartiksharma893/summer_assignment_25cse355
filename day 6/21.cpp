//Write a program to Convert decimal to binary.

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<" enter the decimal number "<<endl;
    cin>>n;
    cout<<n<<" in binary form is ";
    string a="";
     if(n==0){
        a="0";
    }
    while(n>0){
        int r=n%2;
        n=n/2;
        a=char('0'+r)+a;
    }
   
    cout<<a;
    
   return 0;
}