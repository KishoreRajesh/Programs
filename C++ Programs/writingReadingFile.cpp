#include <iostream>
#include <fstream>
using namespace std;

int main(){

    ofstream myFile("summa.txt");
    myFile << "Hi Frends" << endl << "My Name is Kishore" << endl << "I am From Ponidcherrry";
    myFile.close();
    string myText;

    ifstream myRFile("summa.txt");
    while(getline (myRFile,myText)){
        cout << myText<< endl;
    }
    myRFile.close();
    return 0;
}