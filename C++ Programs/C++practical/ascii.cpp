#include <iostream>
using namespace std;

int main(){
    char userIn;
    int ascii;
    cout << "Enter a character to know the ascii value : ";
    cin >> userIn;
    ascii = (int)userIn;
    cout << ascii << endl;
    return 0;
}