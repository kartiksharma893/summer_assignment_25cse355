// Write a program to Print Armstrong numbers in a range

#include <iostream>
using namespace std;

int main()
{
    int x, y, z, n, a, b, d, j, i, s;
    cout << " enter the starting term :" << endl;
    cin >> x;
    cout << "enter the last term " << endl;
    cin >> y;
    for (z = x; z <= y; z++)
    {
        n = z;
        i = 0;
        s = 0;
        d = n;
        if (n == 0)
        {
            cout << 0 << "\t";
            continue;
        }
        while (d > 0)
        {
            a = d % 10;
            d = d / 10;
            i++;
        }

        d = n;
        while (d > 0)
        {
            b = 1;
            a = d % 10;
            d = d / 10;
            for (j = 1; j <= i; j++)
            {
                b = b * a;
            }
            s = s + b;
        }
        if (s == n)
        {
            cout << n << "\t";
        }
    }
    return 0;
}