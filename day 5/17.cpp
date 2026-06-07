// Write a program to Check perfect number.
#include <iostream>
using namespace std;

int main()
{
    int n, s = 0;
    cout << "enter the number: " << endl;
    cin >> n;
    for (int i = 1; i < n; i++)
    {
        if ((n % i) == 0)
        {
            s = s + i;
        }
    }
    if (s == n)
    {
        cout << "given number is a perfect number ";
    }
    else
    {
        cout << "given number is not perfect ";
    }
    return 0;
}