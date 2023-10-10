#include<iostream>
using namespace std;

int main(){
    int enroll ;
    int bookId ;
    char bookName[100] ;
    int Days;
    int fine ;
    cout <<"Enter Student Details,\nEnroll Number : ";
    cin >> enroll;
    cout << "Book Id : ";
    cin >> bookId;
    cout << "Book Name :";
    cin >> bookName;
    cout << "No Of Days :";
    cin >> Days;

    if(Days<30){
        fine = 0;
        cout << "Your Fine Amount is " << fine << "\n";
    }else if(Days>30 && Days<46){
        fine =10;
        cout << "Your Fine Amount is " << fine << "\n";
    }else if(Days>45 && Days<66){
        fine = 20;
        cout << "Your Fine Amount is " << fine << "\n";
    }else if(Days>65){
        fine = 30;
        cout << "Your Fine Amount is " << fine << "\n";
    }
    return 0;
}