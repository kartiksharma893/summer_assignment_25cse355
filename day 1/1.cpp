#include<iostream>
using namespace std;
int main(){
    int i,sum=0,n;
    cout<<"enter the number till which you want sum"<<endl;
    cin>>n;
    for(i=0;i<=n;i++){
        sum=sum+i;
    }
    cout<<"the sum till "<<n<<" is "<<sum;
    return 0;
}