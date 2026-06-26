// Write a program to Create quiz application.
#include <iostream>
using namespace std;
int main()
{
    int answer, score = 0;
    cout << "QUIZ APPLICATION\n\n";
    
    cout << "Q1. What is the capital of India?\n";
    cout << "1. Mumbai\n2. Delhi\n3. Kolkata\n4. Chennai\n";
    cout << "Enter your answer: ";
    cin >> answer;

    if (answer == 2)
        score++;

    cout << "\nQ2. Which language is known as the mother of all programming languages?\n";
    cout << "1. C\n2. Java\n3. Python\n4. HTML\n";
    cout << "Enter your answer: ";
    cin >> answer;

    if (answer == 1)
        score++;

    cout << "\nQ3. How many days are there in a week?\n";
    cout << "1. 5\n2. 6\n3. 7\n4. 8\n";
    cout << "Enter your answer: ";
    cin >> answer;

    if (answer == 3)
        score++;

    cout << "\n QUIZ RESULT\n";
    cout << "Your Score: " << score << "/3\n";

    if (score == 3)
        cout << "Excellent!\n";
    else if (score == 2)
        cout << "Good Job!\n";
    else
        cout << "Keep Practicing!\n";

    return 0;
}