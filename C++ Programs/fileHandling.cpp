#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string fileName = "sample.txt";
    ofstream fileOut(fileName);

    if (fileOut.is_open()) {
        cout << "File opened successfully for writing" << endl;

        string line1 = "Hello, this is the first line.";
        string line2 = "This is the second line.";

        fileOut << line1 << endl;
        fileOut << line2 << endl;

        fileOut.close();
        cout << "File written successfully and closed" << endl;
    } else {
        cout << "Error opening file" << endl;
        return 1;
    }

    ifstream fileIn(fileName);

    if (fileIn.is_open()) {
        cout << "File opened successfully for reading" << endl;

        string line;
        while (std::getline(fileIn, line)) {
            std::cout << line << std::endl;
        }

        fileIn.close();
        std::cout << "File read successfully and closed" << std::endl;
    } else {
        std::cout << "Error opening file" << std::endl;
        return 1;
    }

    return 0;
}