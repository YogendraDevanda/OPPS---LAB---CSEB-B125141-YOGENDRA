#include <iostream>
#include <string>
using namespace std;

class TrainSeat {
private:
    int seatNumber;
    string passengerName;
    bool bookingStatus;

public:
    TrainSeat(int number, string name, bool status) {
        seatNumber = number;
        passengerName = name;
        bookingStatus = status;
    }

    friend class TicketChecker;
};

class TicketChecker {
public:
    void displaySeatDetails(const TrainSeat& seat) {
        cout << "Seat Number: " << seat.seatNumber << endl;

        if (seat.bookingStatus) {
            cout << "Booking Status: Booked" << endl;
            cout << "Passenger Name: " << seat.passengerName << endl;
        } else {
            cout << "Booking Status: Available" << endl;
            cout << "Passenger Name: None" << endl;
        }
    }

    void checkSeatStatus(const TrainSeat& seat) {
        if (seat.bookingStatus) {
            cout << "The seat is booked." << endl;
        } else {
            cout << "The seat is available." << endl;
        }
    }

    void displayPassengerName(const TrainSeat& seat) {
        if (seat.bookingStatus) {
            cout << "Passenger Name: " << seat.passengerName << endl;
        } else {
            cout << "The seat is not booked." << endl;
        }
    }
};

int main() {
    TrainSeat seat1(25, "Yogendra Devanda", true);

    TicketChecker checker;

    cout << "----- Seat Details -----" << endl;
    checker.displaySeatDetails(seat1);

    cout << " Seat Status " << endl;
    checker.checkSeatStatus(seat1);

    cout << " Passenger Information " << endl;
    checker.displayPassengerName(seat1);

    return 0;
}