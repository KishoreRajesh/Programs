#include<iostream>
#include<fstream>

using namespace std;

int main(){
    string s;
    cout << "Enter a string to find the longest word out of it : ";
    getline(cin,s);

    fstream file;
    file.open("Longest.txt",ios::out|ios::in|ios::trunc);
    file<<s<<endl;
    file.seekg(0,ios::beg);
    int mincount =100,count;
    string maxlen;
    string minlen;
    while(file>>s){
        count = s.length();
        if(count < mincount){
            mincount = count;
            minlen = s;
        }
    }
    cout << "Therefore the longest word in the sentence is " << minlen << endl;
    return 0;
}