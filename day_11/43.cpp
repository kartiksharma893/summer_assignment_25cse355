// Write a program to Write function to check prime.

#include <iostream>
using namespace std;

int check_prime(int n)
{
    if (n < 2)
    {
        return 0;
    }
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int a;
    cout << "enter the number " << endl;
    cin >> a;
    if (check_prime(a) == 1)
    {
        cout << "it is a prime number";
    }
    else
    {
        cout << "it is not a prime number";
    }
    return 0;
}