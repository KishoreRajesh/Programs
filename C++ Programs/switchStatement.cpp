#include <iostream>
using namespace std;

string getDay(int);

int main(){
    int num ;
    cout << "Enter a Number (1-7 ):";
    cin >> num;
    cout << getDay(num);
    return 0;
}

string getDay(int userIn){
    string getDays ;

    switch (userIn){
        case 1:
            getDays = "Sunday";
            break;
        case 2:
            getDays = "Monday";
            break;
        case 3:
            getDays = "Tuesday";
            break;
        case 4:
            getDays = "Wednesday";
            break;
        case 5:
            getDays = "Thursday";
            break;
        case 6:
            getDays = "Friday";
            break;
        case 7:
            getDays = "Saturday";
            break;
        default :
            getDays = "ERROR!!!!\nEnter values btw 1 to 7...\n";
    }

    return getDays;
}