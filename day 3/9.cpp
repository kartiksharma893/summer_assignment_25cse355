// Write a program to Check whether a number is prime.
 #include<iostream>
 using namespace std;

 int main(){
    int n,i,r;
    cout<<"enter the number "<<endl;
    cin>>n;
    if(n<2){
        cout<<"number is not prime ";
    }
    else{
        for(i=2;i<n;i++){
            r=n%i;
            if(r==0){
                cout<<" number is not prime ";
                break;
            }
           
        }
    }
     if(i==n){
                cout<<"number is prime ";
            }
 }