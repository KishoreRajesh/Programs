#include <iostream>
using namespace std;

void calculate(int ,int, char);

int main(){
    int num1, num2;
    char op ;

    cout << "Enter First Number :";
    cin >> num1;
    cout << "Enter Second Number : ";
    cin >> num2;
    cout << "Enter a Operator (+,-,*,/) : ";
    cin >> op;

    calculate ( num1, num2, op);
    return 0;
}

void calculate (int fNum, int sNum, char op ){
    if(op == '+'){
        cout << fNum + sNum;
    }else if(op == '-'){
        cout << fNum - sNum << "\n";
    }else if(op == '*'){
        cout << fNum * sNum << "\n";
    }else if(op == '/'){
        cout << fNum / sNum << "\n";
    }else{
        cout << "Invalid Operator" << "\n";
    }
}