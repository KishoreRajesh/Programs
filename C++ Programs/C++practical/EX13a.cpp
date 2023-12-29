#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main() {
    char str[100] = "Good Morning";
    ofstream myfile("abc.txt");
    if (!myfile.is_open()) {
        cout << "Error opening file!" << endl;
        return 1;
    }
    myfile << str;
    myfile.close();
    cout << "File write successful" << endl;

    ifstream inputFile("abc.txt");
    if (!inputFile) {
        cout << "Error opening file!" << endl;
        return 1;
    }
    cout << "File Content using IStream: " << endl;
    string line;
    while (getline(inputFile, line)) {
        cout << line << endl;
    }
    return 0;
}
