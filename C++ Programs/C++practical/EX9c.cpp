#include<iostream>
using namespace std;

class firstbase{
protected:
    int sub1, sub2, sub3;
public:
    void setMarks(int s1, int s2, int s3){
        sub1 = s1;
        sub2 = s2;
        sub3 = s3;
    }
};

class Secondbase{
protected:
    int sub4, sub5, sub6;
public:
    void setMarks1(int s4, int s5, int s6){
        sub4 = s4;
        sub5 = s5;
        sub6 = s6;        
    }
};

class Derived :public firstbase, public Secondbase{
public:
    void calcAvg(){
        int total = sub1 + sub2 + sub3 + sub4 + sub5 + sub6;
        double avg = static_cast <double>(total)/6;
        cout << "Average : " << avg << endl;
    }
};

int main(){
    Derived obj;
    int s1, s2, s3, s4, s5, s6;
    cout << "Enter mark for 1st 3 subjects : ";
    cin >> s1 >> s2 >> s3;
    cout << "Enter marks for 2nd 3 Subjects : ";
    cin >> s4 >> s5 >> s6;
    obj.setMarks(s1, s2, s3);
    obj.setMarks1(s4, s5, s6);
    obj.calcAvg();
    return 0;
}