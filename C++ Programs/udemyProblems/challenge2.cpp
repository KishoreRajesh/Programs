#include <iostream>
using namespace std;

int main(){

    const double tax = 0.18;
    const double pricePerSmallRoom = 250.00;
    const double pricePerBigRoom = 500.00;
    cout << endl << endl;
    cout << "Welcome to kishore\'s, carpet Cleaning Service " << endl << endl;
    cout << "Enter No of small rooms : ";
    int smallRooms ;
    cin >> smallRooms;
    cout << "Enter No of Big rooms : ";
    int bigRooms ;
    cin >> bigRooms;

    double costOfsmallRoom = pricePerSmallRoom * smallRooms;
    double costOfBigRoom = pricePerBigRoom * bigRooms;
    double grandTotal = (costOfBigRoom + costOfsmallRoom) + ((costOfBigRoom + costOfsmallRoom) * tax);

    cout << "-------------------**INVOICE**-------------------" << endl;
    cout << "No of small rooms = " << smallRooms << endl;
    cout << "No of Big rooms = " << bigRooms << endl;
    cout << "Cost = " << costOfBigRoom + costOfsmallRoom << endl;
    cout << "Tax(18%) = " << (costOfBigRoom + costOfsmallRoom) * tax << endl;
    cout << "-------------------------------------------------" << endl;
    cout << "GRAND TOTAL = " << grandTotal << endl;
    cout << "This invoice is applicable for 30 days ......" << endl;
    cout << "-------------------------------------------------" << endl;
    return 0;
}