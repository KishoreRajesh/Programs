#include<iostream>
using namespace std;

int main(){
    int a;
    cout << "enter a = ";
    cin >> a;

    if(a%2 == 0){
        cout << "It is a even number ";
    }else{
        cout << "It is a odd number ";
    }
    return 0;
}