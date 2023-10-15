#include <iostream>
#include <cmath>
using namespace std;

bool isAmstrong(int);
int digits(int);

int main() {

    cout << "--------------------FINDING AMSTRONG NUMBERS BETWEEN RANGE---------------------"<<endl;
    int uLimit;
    int lLimit;
    cout << "Enter the lower Limit :";
    cin >> lLimit;
    cout << "Enter the Upper Limit :";
    cin >> uLimit;
    cout << "-------------------------------------------------------------------------------"<< endl;
    cout << "The Amstrong numbers between " << lLimit << " and " << uLimit << " are,"<<endl;
    for (int i = lLimit; i <= uLimit; i++) {
        if (isAmstrong(i)) {
            cout << i << " ";
        }
    }
    cout << endl;
    cout << "-------------------------------------------------------------------------------" << endl;
    return 0;
}

int digits(int num) {
    int count = 0;
    while (num > 0) {
        num /= 10; 
        count++;
    }
    return count;
}

bool isAmstrong(int num) {
    int remainder, result = 0, temp;
    temp = num;
    int n = digits(num);
    while (temp > 0) {
        remainder = temp % 10;
        result += pow(remainder, n);
        temp /= 10;
    }

    if (result == num) {
        return true;
    } else {
        return false;
    }
}
