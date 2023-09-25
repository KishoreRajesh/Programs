#include <iostream>
#include<string>
using namespace std;

int main(){
    string userIn;
    char choice;
    string encrypted;
    string alphabets = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
    string cipher =    "qwertyuiopasdfghjklzxcvbnmQWERTYUIOPASDFGHJKLZXCVBNM";
    cout << "Enter a message to encrypt :";
    getline(cin,userIn);
    for(char c : userIn){
        size_t index = alphabets.find(c);
        if(index != string :: npos){
            char newChar = cipher.at(index);
            encrypted += newChar;
        }else{
            encrypted += c;
        }
    }
    cout <<  "Encrypted Message : " << encrypted << endl;
    cout << "Do you want to Decrypt the message (Y/N) :";
    cin >> choice ;
    if(choice == 'y'|| choice == 'Y'){
        cout << "Decrytping message ..." << endl;
        string decrypted;
        for(char c : encrypted){
            size_t index = cipher.find(c);
            if(index != string ::npos){
                char newChar = alphabets.at(index);
                decrypted += newChar;
            }else{
                decrypted += c;
            }
        }
        cout << "Decrypted Message : " << decrypted << endl;
    }

    return 0;
}