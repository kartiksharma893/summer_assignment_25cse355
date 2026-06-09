// Write a program to Recursive sum of digits.
#include<iostream>
using namespace std;

int sum(long long n){
   if(n==0){
    return 0;
   }
   return (n%10)+sum(n/10);
    }
   
    


int main(){
    long long x;
    cout<<" enter the number "<<endl;
    cin>>x;

    cout<<" the sum of digits is "<<sum(x);
    return 0;

}