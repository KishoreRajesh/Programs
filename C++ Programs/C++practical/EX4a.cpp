#include<iostream>
#include<string.h>

using namespace std;

class bank{
private:
    string name;
    string accType;
    int acc;
    int bal;
public:
    bank(){
        bal =0;
        cout << "Enter Account Type :";
        cin >> accType;
        cout << "Enter Account Holder Name :";
        cin >> name;
    }
    bank(int, int){
        cout << "Enter account Number :";
        cin >> acc;
        cout << "Enter Your bank Balance :";
        cin >> bal;
    } 

    bank(bank &b)
    {
        cout << "Enter Account Holder :";
        cin >> name;
        this->accType = b.accType;
        this->acc = b.acc;
        this->bal = b.bal;
    }  

    void deposit(){
        int dep ;
        cout << "Enter a amount to deposit:";
        cin >> dep;
        bal = bal + dep;
    }

    void withdraw(){
        int with;
        cout << "Enter a amount to withdraw:";
        cin >> with;
        if(with >bal){
            cout << "The amount is Declined" << endl;
        }else{
            cout << "Amount Withdrawn " << with << endl;
            bal = bal - with;
        }
    }
    void disp(){
        cout << "Account Holder :" << name << endl;
        cout << "Balance        :" << bal << endl;
    }
};


int main(){
    bank holder;
    holder.deposit();
    holder.withdraw();
    bank holder2=holder;
    holder.disp();
    cout << endl;
    holder2.disp();
    return 0;
}