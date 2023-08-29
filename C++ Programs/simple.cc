#include <iostream>
using namespace std;

int main (){
    int age;
    string name;

    cout << "Enter your Name ";
    getline(cin, name);
    cout << "Enter your Age ";
    cin >> age;

    cout << "My Name is "<< name << " And I am " << age << " years Old.";

    return 0;
}
