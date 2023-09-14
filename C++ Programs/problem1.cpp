#include <iostream>
#include <string>
using namespace std;

int main(){
    string mystring;
    cout << "-------Converting lowercased words into uppercase ------\n";
    cout << "Enter a lowercase sentence :";
    getline(cin,mystring);
    for(int i =0; i < mystring.length();i++){
        if(islower(mystring[i])){
            mystring[i] = mystring[i]-32;
        }
    }
    cout << "--------------------------------------------------------\n";
    cout << "The uppercased sentence = " << mystring << endl;
    cout << "---------------------------------------------------------\n";
    return 0;
}