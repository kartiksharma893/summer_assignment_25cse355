// Write a program to Develop complete mini project using arrays, strings and functions.

// mini movie ticket booking system using arrays, strings and functions.
#include <iostream>
using namespace std;
int movieId[100];
string movieName[100];
int totalSeats[100];
int bookedSeats[100];
int n = 0;
void addMovie()
{
    cout << "Enter Movie ID: ";
    cin >> movieId[n];
    cout << "Enter Movie Name: ";
    cin >> movieName[n];
    cout << "Enter Total Seats: ";
    cin >> totalSeats[n];
    bookedSeats[n] = 0;
    n++;
    cout << "Movie Added Successfully.\n";
}

void displayMovies()
{
    if (n == 0)
    {
        cout << "No Movies Available.\n";
        return;
    }

    cout << "\nMovie Details:\n";

    for (int i = 0; i < n; i++)
    {
        cout << "\nMovie ID      : " << movieId[i];
        cout << "\nMovie Name    : " << movieName[i];
        cout << "\nTotal Seats   : " << totalSeats[i];
        cout << "\nBooked Seats  : " << bookedSeats[i];
        cout << "\nAvailable Seat: " << totalSeats[i] - bookedSeats[i] << endl;
    }
}

void searchMovie()
{
    int id;
    bool found = false;

    cout << "Enter Movie ID to Search: ";
    cin >> id;

    for (int i = 0; i < n; i++)
    {
        if (movieId[i] == id)
        {
            cout << "\nMovie Found";
            cout << "\nMovie ID      : " << movieId[i];
            cout << "\nMovie Name    : " << movieName[i];
            cout << "\nTotal Seats   : " << totalSeats[i];
            cout << "\nBooked Seats  : " << bookedSeats[i];
            cout << "\nAvailable Seat: " << totalSeats[i] - bookedSeats[i] << endl;

            found = true;
            break;
        }
    }

    if (!found)
    {
        cout << "Movie Not Found.\n";
    }
}

void bookTicket()
{
    int id;
    bool found = false;

    cout << "Enter Movie ID: ";
    cin >> id;

    for (int i = 0; i < n; i++)
    {
        if (movieId[i] == id)
        {
            found = true;

            if (bookedSeats[i] < totalSeats[i])
            {
                bookedSeats[i]++;
                cout << "Ticket Booked Successfully.\n";
            }
            else
            {
                cout << "No Seats Available.\n";
            }

            break;
        }
    }

    if (!found)
    {
        cout << "Movie Not Found.\n";
    }
}

void cancelTicket()
{
    int id;
    bool found = false;

    cout << "Enter Movie ID: ";
    cin >> id;

    for (int i = 0; i < n; i++)
    {
        if (movieId[i] == id)
        {
            found = true;

            if (bookedSeats[i] > 0)
            {
                bookedSeats[i]--;
                cout << "Ticket Cancelled Successfully.\n";
            }
            else
            {
                cout << "No Ticket to Cancel.\n";
            }

            break;
        }
    }

    if (!found)
    {
        cout << "Movie Not Found.\n";
    }
}

int main()
{
    int choice;

    do
    {
        cout << "\n      Mini Movie Ticket Booking System ";
        cout << "\n1. Add Movie";
        cout << "\n2. Display Movies";
        cout << "\n3. Search Movie";
        cout << "\n4. Book Ticket";
        cout << "\n5. Cancel Ticket";
        cout << "\n6. Exit";
        cout << "\nEnter Choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            addMovie();
            break;

        case 2:
            displayMovies();
            break;

        case 3:
            searchMovie();
            break;

        case 4:
            bookTicket();
            break;

        case 5:
            cancelTicket();
            break;

        case 6:
            cout << "Exiting Program...";
            break;

        default:
            cout << "Invalid Choice.\n";
        }

    } while (choice != 6);

    return 0;
}