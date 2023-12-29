#include<iostream>
#include<fstream>
using namespace std;
int main(){
    fstream new_file;
    new_file.open("example.txt", ios::out);
    if(!new_file){
        cout << "File creation failed";
    }else{
        cout << "New File created" << endl;
        new_file<< "Learning file Handling"<< endl;
        new_file<< "File Stream operations"<< endl;
        new_file.close();
    }
    fstream filestream("example.txt", ios::in);
    if(!filestream.is_open()){
        cout << "Error opening the file " << endl;
        return 1;
    }
    cout << "File Content using Filestream" << endl;
    char eh;
    while(filestream.get(eh)){
        cout << eh;
    }
    filestream.close();
    return 0;
}