// Write a program to Write function for palindrome.

#include<iostream>
using namespace std;

int check_palindrome(int x){
    int reverse=0;
    int original=x;
    while(x>0){
        int r=x%10;
      
        reverse=reverse*10+r;
        x=x/10;

    }
    if(reverse==original){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    int n;
    cout<<"enter the number "<<endl;
    cin>>n;
    int c=check_palindrome(n);
    if(c==1){
        cout<<n<<" is palindrome ";
    }
    else{
        cout<<n<<" is not palindrome";
    }
}