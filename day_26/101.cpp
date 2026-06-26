// Write a program to Create number guessing game.
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
    cout << " It is a number guessing game. you have to guess the number that ranges from 1 to 100 within 5 attempts:-" << endl;
    srand(time(0));
    int number = rand() % 100 + 1;
    int guess;
    bool found = false;
    for (int i = 0; i < 5; i++)
    {
        cout << "attempt " << i + 1 << " :  ";
        cin >> guess;
        if (guess == number)
        {
            cout << "you guessed correct";
            found = true;
            break;
        }
        else if (guess < number)
        {
            cout << "you guessed low";
        }
        else if (guess > number)
        {
            cout << "you guessed high";
        }
        cout << endl;
    }
    if (found == false)
    {
        cout << "your all atempts are wrong, better luck next time ";
    }
    return 0;
}