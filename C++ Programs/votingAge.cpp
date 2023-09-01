#include <iostream>
using namespace std;

int main(){
    int myAge ;
    int voteAge = 18;
    string result ;
    cout << "Enter Your Age :";
    cin >> myAge ;
    result = (myAge >= voteAge)? "You Are Eligible to Vote \n" : "You Are Not eligible to vote .. \n";
    cout << result;
    return 0;
}