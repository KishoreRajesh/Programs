#include <iostream>
#include <iomanip> 

using namespace std;

class ElectricityBoard {
private:
    string userName;
    int unitsConsumed;
    double totalCharge;

public:

    void readUserDetails() {
        cout << "Enter user name: ";
        cin.ignore(); 
        getline(cin, userName);

        cout << "Enter units consumed: ";
        cin >> unitsConsumed;
    }

    void calculateCharges() {
        const double rateFirst100 = 1.5;
        const double rateNext200 = 2.0;
        const double rateBeyond300 = 3.0;
        const double minCharge = 500.0;
        const double additionalChargePercentage = 0.15;

        if (unitsConsumed <= 100) {
            totalCharge = minCharge + unitsConsumed * rateFirst100;
        } else if (unitsConsumed <= 300) {
            totalCharge = minCharge + 100 * rateFirst100 + (unitsConsumed - 100) * rateNext200;
        } else {
            totalCharge = minCharge + 100 * rateFirst100 + 200 * rateNext200 + (unitsConsumed - 300) * rateBeyond300;
        }
        if (totalCharge > 200.0) {
            totalCharge += totalCharge * additionalChargePercentage;
        }
    }


    void displayCharges() {
        cout << fixed << setprecision(2); 
        cout << "\n---------------------------\n";
        cout << "User Name: " << userName << endl;
        cout << "Units Consumed: " << unitsConsumed << endl;
        cout << "Total Charges: Rs." << totalCharge << endl;
        cout << "---------------------------\n";
    }
};

int main() {
    const int numUsers = 3; 
    ElectricityBoard users[numUsers];
    for (int i = 0; i < numUsers; ++i) {
        cout << "\nEnter details for User " << i + 1 << ":\n";
        users[i].readUserDetails();
        users[i].calculateCharges();
    }
    cout << "\nElectricity Charges:\n";
    for (int i = 0; i < numUsers; ++i) {
        users[i].displayCharges();
    }
    return 0;
}
