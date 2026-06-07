// Write a program to Check strong number
#include <iostream>
using namespace std;

int fact(int x)
{
    if(x==0){
        return 1;
    }
    return x * fact(x - 1);
}

int main()
{
    int t,n, s = 0;
    cout << "enter the number " << endl;
    cin >> t;
    n=t;
    while (n > 0)
    {
        int a = n % 10;
        n = n / 10;
        s = s + fact(a);
    }
    if (s == t)
    {
        cout << "the given number is strong number";
    }
    else
    {
        cout << "given number is not strong number ";
    }
    return 0;
}