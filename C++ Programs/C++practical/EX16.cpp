#include <iostream>
#include <vector>
#include <iomanip>

class Train {
public:
    Train(int trainNumber, int totalSeats) : trainNumber(trainNumber), totalSeats(totalSeats), availableSeats(totalSeats) {}

    int getTrainNumber() const {
        return trainNumber;
    }

    int getAvailableSeats() const {
        return availableSeats;
    }

    void bookTicket(int numTickets) {
        if (numTickets > 0 && numTickets <= availableSeats) {
            availableSeats -= numTickets;
            std::cout << "Tickets booked successfully.\n";
        } else {
            std::cout << "Sorry, not enough seats available.\n";
        }
    }

    void displayTrainInfo() const {
        std::cout << "Train Number: " << trainNumber << "\n";
        std::cout << "Total Seats: " << totalSeats << "\n";
        std::cout << "Available Seats: " << availableSeats << "\n";
    }

private:
    int trainNumber;
    int totalSeats;
    int availableSeats;
};

class RailwayReservationSystem {
public:
    void addTrain(int trainNumber, int totalSeats) {
        trains.push_back(Train(trainNumber, totalSeats));
    }

    void displayAllTrains() const {
        std::cout << "Available Trains:\n";
        for (const Train& train : trains) {
            train.displayTrainInfo();
            std::cout << "------------------------\n";
        }
    }

    void bookTicket(int trainNumber, int numTickets) {
        for (Train& train : trains) {
            if (train.getTrainNumber() == trainNumber) {
                train.bookTicket(numTickets);
                return;
            }
        }
        std::cout << "Train not found.\n";
    }

private:
    std::vector<Train> trains;
};

int main() {
    RailwayReservationSystem reservationSystem;
    reservationSystem.addTrain(101, 50);
    reservationSystem.addTrain(102, 30);
    reservationSystem.addTrain(103, 40);

    int choice;
    do {
        std::cout << "Railway Reservation System Menu:\n";
        std::cout << "1. Display All Trains\n";
        std::cout << "2. Book Ticket\n";
        std::cout << "3. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                reservationSystem.displayAllTrains();
                break;
            case 2:
                int trainNumber, numTickets;
                std::cout << "Enter train number: ";
                std::cin >> trainNumber;
                std::cout << "Enter number of tickets: ";
                std::cin >> numTickets;
                reservationSystem.bookTicket(trainNumber, numTickets);
                break;
            case 3:
                std::cout << "Exiting...\n";
                break;
            default:
                std::cout << "Invalid choice. Please try again.\n";
                break;
        }
    } while (choice != 3);

    return 0;
}
