#include <iostream>
#include <cctype> 

using namespace std;

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);
    for (size_t i = 0; i < input.length(); ++i) {
        if (i == 0 || input[i - 1] == ' ') {
            input[i] = toupper(input[i]);
        }
    }
    cout << "String with capitalized words: " << input << endl;
    return 0;
}
