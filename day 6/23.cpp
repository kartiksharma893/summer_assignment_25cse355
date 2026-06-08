// Write a program to Count set bits in a number
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<" enter the number "<<endl;
    cin>>n;
    int i=0;
    
    while(n>0){
        int r=n%2;
        n=n/2;
        if(r==1){
                i++;
        }
    }
    cout<<" the number of set bits are "<<i;
    return 0;
   

}