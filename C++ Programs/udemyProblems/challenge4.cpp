#include <iostream>
using namespace std;

int main(){
//                          THIS PART IS FOR INR
    const int paise_per_rupee = 100;
    cout << "Enter amount in paise :" ;
    int paise = 0;
    cin >> paise;
    int rupee;
    int spares;
    rupee = paise/paise_per_rupee;
    spares = paise % paise_per_rupee;
    cout << "You can get change as follows ;" << endl;
    cout << "Rupees : " << rupee << endl;
    cout << "Paise  : " << spares << endl;

//                         THIS PART IS FOR USD    

    const int cent_per_dollar = 100;
    const int cent_per_quarter = 25;
    const int cent_per_dime = 10;
    const int cent_per_nickel = 5;
    cout << "Enter amount in cents :";
    int cents =0;
    cin >> cents;
    int dollar=0,quarter=0,dime=0,nickel=0,cent=0,spare=0,spare1=0,spare2=0,spare3=0;
    dollar = cents/cent_per_dollar;
    spare = cents%cent_per_dollar;
    quarter = spare/cent_per_quarter;
    spare1 = spare %cent_per_quarter;
    dime = spare1/cent_per_dime;
    spare2 = spare1%cent_per_dime;
    nickel = spare2 / cent_per_nickel;
    spare3 = spare2%cent_per_nickel;
    cout << "You can a change as follows ;" << endl;
    cout << "Dollar  : " << dollar << endl;
    cout << "Quarter : " << quarter << endl;
    cout << "Dime    : " << dime << endl;
    cout << "Nickel  : " << nickel << endl;
    cout << "cents   : " << spare3 << endl;
    return 0;
}