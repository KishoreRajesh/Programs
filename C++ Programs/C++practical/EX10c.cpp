#include<iostream>
using namespace std;

class number {
protected:
    double num1, num2;
public:
    void numbers(double n1, double n2) {
        num1 = n1;
        num2 = n2;
    }
};

class Addition : virtual public number {
public:
    double add() {
        return num1 + num2;
    }
};

class Subtraction : virtual public number {
public:
    double Subtract() {
        return num1 - num2;
    }
};

class Result : public Addition, public Subtraction {
public:
    void result() {
        cout << "Addition : " << add() << endl;
        cout << "Subtraction : " << Subtract() << endl;
    }
};

int main() {
    Result res;
    double num1, num2;
    cout << "Enter 1st Num : ";
    cin >> num1;
    cout << "Enter 2nd Num : ";
    cin >> num2;
    res.numbers(num1, num2);
    res.result();
    return 0;
}

