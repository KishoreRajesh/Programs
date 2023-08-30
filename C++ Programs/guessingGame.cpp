#include <iostream>
using namespace std;

int main(){
    string answer = "Apple"; 
    string guess;
    int count = 0;
    int limit = 3;
    while(guess != answer){
        cout << "Enter Your Guess : ";
        cin >> guess;
        
        if(count >= limit ){
            cout << "You Have Exeeded your limit..." << endl;
            break;
        }else if(guess == answer){
            cout << "You have guessed Right...." << endl;
        }
        count ++;
    }
    return 0;

}