// Write a program to Find largest prime factor.

#include <iostream>
using namespace std;

int check_prime(int x)
{
    if (x < 2)
    {
        return 0;
    }
    for (int j = 2; j < x; j++)
    {
        if (x % j == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int n, t = -1;
    cout << "enter the number " << endl;
    cin >> n;

    if(n<=1){
        cout<<" no prime factor found " ;
        return 0;
    }
    

    for (int i = 2; i <= n; i++)
    {
        if (n % i == 0)
        {
            int y = check_prime(i);
            if (y == 1)
            {
                t = i;
            }
        }
    }
    if (t == -1)
    {
        cout << "no prime factor found ";
    }
    else
    {
        cout << "the largest prime factor of " << n << " is " << t;
    }

    return 0;
}