#include <iostream>
using namespace std;
void hello(string);

int main(){
    string name ;
    cout << "Enter a Name : ";
    getline(cin, name);
    hello(name);
    return 0;
}

void hello (string name){
    cout << "Hello " << name << "!!!!!!"<< endl;
}