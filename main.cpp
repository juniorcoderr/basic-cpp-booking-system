#include <iostream>
#include <string>

using namespace std;

#define MAX_SEATS 50
#define MAX_NAME_LENGTH 50

struct Booking
{
    string name;
    int age;
    string source;
    string destination;
    int seat_number;
    int is_booked;
};

Booking train[MAX_SEATS];

void initializeSeats()
{
    for (int i = 0; i < MAX_SEATS; i++)
    {
        train[i].is_booked = 0; // 0 means empty seat
    }
}

void displayAvailableSeats()
{
    cout << "Available Seats: " << endl;

    for (int i = 0; i < MAX_SEATS; i++)
    {
        if (!train[i].is_booked)
        {
            cout << "Seat " << i + 1 << " " << endl;
        }
    }
    cout << endl;
}

void bookSeat()
{
    int seat_number;
    cout << "Enter seat number to book: ";
    cin >> seat_number;
    seat_number--;

    if (seat_number < 0 || seat_number >= MAX_SEATS)
    {
        cout << "Invalid seat number" << endl;
        return;
    }

    if (train[seat_number].is_booked)
    {
        cout << "Seat already booked" << endl;
    }
    else
    {
        train[seat_number].is_booked = 1;
        train[seat_number].seat_number = seat_number + 1;
        cout << "Enter passenger name: ";
        cin >> train[seat_number].name;
        cout << "Enter passenger age: ";
        cin >> train[seat_number].age;
        cout << "Enter source: ";
        cin >> train[seat_number].source;
        cout << "Enter destination: ";
        cin >> train[seat_number].destination;
        cout << "Seat booked successfully!" << endl;
    }
}

void cancelSeat()
{
    int seat_number;
    cout << "Enter seat number to cancel booking: ";
    cin >> seat_number;
    seat_number--;

    if (seat_number < 0 || seat_number >= MAX_SEATS)
    {
        cout << "Invalid seat number" << endl;
        return;
    }

    if (train[seat_number].is_booked)
    {
        train[seat_number].is_booked = 0;
        cout << "Seat booking cancelled successfully" << endl;
    }
    else
    {
        cout << "Seat is not booked" << endl;
    }
}

void printTicket(int seat_number)
{
    seat_number--;

    if (seat_number < 0 || seat_number >= MAX_SEATS)
    {
        cout << "Invalid seat number" << endl;
        return;
    }

    if (train[seat_number].is_booked)
    {
        cout << "Ticket Details: " << endl;
        cout << "Name: " << train[seat_number].name << endl;
        cout << "Age: " << train[seat_number].age << endl;
        cout << "Source: " << train[seat_number].source << endl;
        cout << "Destination: " << train[seat_number].destination << endl;
        cout << "Seat Number: " << train[seat_number].seat_number << endl;
    }
    else
    {
        cout << "Seat is not booked" << endl;
    }
}

int main()
{
    initializeSeats();
    int choice;
    do
    {
        cout << "Bus Booking System" << endl;
        cout << "1. Display available seats" << endl;
        cout << "2. Book a seat" << endl;
        cout << "3. Cancel a seat booking" << endl;
        cout << "4. Print a seat booking" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout << endl;

        switch (choice)
        {
        case 1:
            displayAvailableSeats();
            break;

        case 2:
            bookSeat();
            break;
        case 3:
            cancelSeat();
            break;
        case 4:
            int seat_number;
            cout << "Enter seat number to print tickets: ";
            cin >> seat_number;
            printTicket(seat_number);
            break;
        case 5:
            cout << "Exiting..." << endl;
            break;
        default:
            cout << "Invalid choice" << endl;
        }
        cout << endl;
    } while (choice != 5);

    return 0;
};
