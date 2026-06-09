// Write a program to Recursive reverse number.
#include <iostream>
using namespace std;

void rev(int n)
{

    if (n == 0)
    {
        return;
    }
    cout << (n % 10);
    rev(n / 10);
}

int main()
{
    int x;
    cout << "enter the number " << endl;
    cin >> x;

    if (x == 0)
    {
        cout << 0;
        return 0;
    }

    cout << " the reverse of " << x << " is ";
    
   
    {
        rev(x);
    }
    return 0;
}