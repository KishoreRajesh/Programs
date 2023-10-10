#include<iostream>
using namespace std;

int main(){
    int a,b;
    cout << "Enter a and b ," << endl;
    cout << "a = ";
    cin >> a ;
    cout << "b = ";
    cin >> b;
    cout << "Values before swapping , a = " << a << " b = " << b << endl;
    a = a+b;
    b = a-b;
    a = a-b;
    cout << "Values after swapping , a = " << a << " b = " << b << endl;
    return 0;
 }