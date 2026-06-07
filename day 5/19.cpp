// Write a program to Print factors of a number.
#include <iostream>
using namespace std;

int main()
{
    int n, i;
    cout << "enter the number " << endl;
    cin >> n;
    cout<<"the factors of "<<n<<" are "<<endl;
    for (i = 1; i <= n; i++)
    {
        if ((n % i) == 0)
        {
            cout << i << "\t";
        }
    }
    return 0;
}