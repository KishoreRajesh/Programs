#include<iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    string numString = to_string(num);
    swap(numString[0], numString[numString.length() - 1]);
    int swappedNum = stoi(numString);

    cout << "Number after swapping the 1st and last digit: " << swappedNum << std::endl;

    return 0;
}