// Write a program to Find maximum occurring character.
#include<iostream>
using namespace std;
int main(){
    string a;
    cout<<"enter string: ";
    getline(cin,a); 
    char character;
    int max_frequency=0;
    for(int i=0;i<a.length();i++){
        int frequency=0;
        for(int j=0;j<a.length();j++){
            if(a[i]==a[j]){
                frequency++;
            }
        }
        if(frequency>max_frequency){
            character=a[i];
            max_frequency=frequency;
        }
    }
    cout<<"the maximum occuring character is "<<character<<" and it occured "<<max_frequency<<" times";
    return 0;
}