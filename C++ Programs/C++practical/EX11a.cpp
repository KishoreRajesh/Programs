#include<iostream>
using namespace std;

class number{
public:
    virtual void getNum() =0;
    virtual void printsum() = 0;
};

class TwoNumber : public number{
private:
    int num1, num2;
public:
    void getNum(){
        cout << "Enter 1st Num : ";
        cin >> num1;
        cout << "Enter 2nd Num : ";
        cin >> num2;
    }
    void printsum(){
        cout << "Sum of " << num1 << "and " << num2 << "is " << num1 + num2 << endl;
    }
};

int main(){
    TwoNumber num;
    number *ptr = &num;
    ptr ->getNum();
    ptr->printsum();
    return 0;

}