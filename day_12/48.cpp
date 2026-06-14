// Write a program to Write function for perfect number.

#include <iostream>
using namespace std;

bool is_perfect(int x)
{
    int sum = 0;

    for (int i = 1; i <= x/2; i++)
    {
        if (x % i == 0)
        {
            sum = sum + i;
        }
    }
    if (sum == x)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int x;
    cout << "enter the number" << endl;
    cin >> x;
    bool a = is_perfect(x);
    if (a == 1)
    {
        cout << x << " is a perfect number";
    }
    else
    {
        cout << x << " is not a perfect number";
    }
}