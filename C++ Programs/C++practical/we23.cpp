#include<iostream>
using namespace std;
int main(){
    int fine,days;
    int a,b,c,d;
    char e;
    cout<<"enter the enroll number";
    cin>>a;
    cout<<"enter the book id";
    cin>>b;
    cout<<"enter no of days";
    cin>>days;
    cout<<"book name";
    cin>>e;
    cout<<"fine amount";
    cin>>d;

    if(days<30){
    fine = 0;
    cout << "your fine amount is"<< fine << "\n";
    }else if(days>30 && days<40){
    fine = 10;
    cout << "your fine amount is"<< fine << "\n";
    }else if(days>40 && days<50){
    fine = 20;
    cout << "your fine amount is"<< fine << "\n";
    }else if (days>50 && days<60){
    fine = 30;
    cout << "your fine amount is" << fine << "\n";
    }
    return 0;


}