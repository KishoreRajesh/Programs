#include<iostream>
using namespace std;

int main(){
    int n ;
    cout << "Enter a number : ";
    cin >> n;
    if(n<=10 && n>=0){
        cout << "Single Digit\n";
    }else if(n>=10 && n<=100){
        cout << "Double Digit\n";
    }else if(n>=100 && n<=1000){
        cout << "Triple Digit\n";
    }
    return 0;
}