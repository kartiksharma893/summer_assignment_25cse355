// Write a program to Create ticket booking system.
#include <iostream>
#include <vector>
using namespace std;

class Ticket
{
public:
    int ticketId;
    string name;
    string destination;
    int seats;
};

vector<Ticket> tickets;

void bookTicket()
{
    Ticket t;

    cout << "Enter Ticket ID: ";
    cin >> t.ticketId;

    cout << "Enter Passenger Name: ";
    cin >> t.name;

    cout << "Enter Destination: ";
    cin >> t.destination;

    cout << "Enter Number of Seats: ";
    cin >> t.seats;

    tickets.push_back(t);

    cout << "Ticket Booked Successfully!\n";
}

void displayTickets()
{
    if (tickets.size() == 0)
    {
        cout << "No Tickets Booked!\n";
        return;
    }

    cout << "\n      Ticket Records\n";

    for (int i = 0; i < tickets.size(); i++)
    {
        cout << "Ticket ID   : " << tickets[i].ticketId << endl;
        cout << "Name        : " << tickets[i].name << endl;
        cout << "Destination : " << tickets[i].destination << endl;
        cout << "Seats       : " << tickets[i].seats << endl;
        
    }
}

void searchTicket()
{
    int id;
    bool found = false;

    cout << "Enter Ticket ID: ";
    cin >> id;

    for (int i = 0; i < tickets.size(); i++)
    {
        if (tickets[i].ticketId == id)
        {
            found = true;

            cout << "Ticket Found\n";
            cout << "Ticket ID   : " << tickets[i].ticketId << endl;
            cout << "Name        : " << tickets[i].name << endl;
            cout << "Destination : " << tickets[i].destination << endl;
            cout << "Seats       : " << tickets[i].seats << endl;

            break;
        }
    }

    if (!found)
        cout << "Ticket Not Found!\n";
}

void updateTicket()
{
    int id;
    bool found = false;

    cout << "Enter Ticket ID: ";
    cin >> id;

    for (int i = 0; i < tickets.size(); i++)
    {
        if (tickets[i].ticketId == id)
        {
            found = true;

            cout << "Enter New Destination: ";
            cin >> tickets[i].destination;

            cout << "Enter New Number of Seats: ";
            cin >> tickets[i].seats;

            cout << "Ticket Updated Successfully!\n";
            break;
        }
    }

    if (!found)
        cout << "Ticket Not Found!\n";
}

void cancelTicket()
{
    int id;
    bool found = false;

    cout << "Enter Ticket ID to Cancel: ";
    cin >> id;

    for (int i = 0; i < tickets.size(); i++)
    {
        if (tickets[i].ticketId == id)
        {
            tickets.erase(tickets.begin() + i);

            cout << "Ticket Cancelled Successfully!\n";
            found = true;
            break;
        }
    }

    if (!found)
        cout << "Ticket Not Found!\n";
}

int main()
{
    int choice;

    do
    {
        cout << "\n      Ticket Booking System\n";
        cout << "1. Book Ticket\n";
        cout << "2. Display Tickets\n";
        cout << "3. Search Ticket\n";
        cout << "4. Update Ticket\n";
        cout << "5. Cancel Ticket\n";
        cout << "6. Exit\n";
        cout << "Enter Your Choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            bookTicket();
            break;

        case 2:
            displayTickets();
            break;

        case 3:
            searchTicket();
            break;

        case 4:
            updateTicket();
            break;

        case 5:
            cancelTicket();
            break;

        case 6:
            cout << "Thank You!\n";
            break;

        default:
            cout << "Invalid Choice!\n";
        }

    } while (choice != 6);

    return 0;
}