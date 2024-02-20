#include<iostream>
using namespace std;

class al{
    public:
        void show(){
            cout << "Hello base";
        }
};

class a : public al{
    public:
        void show(){
            cout << "hello derived";
        }
};

int main(){
    al ac;
    a bd;
//     al *b;
//    b = &bd;
    bd.show();
//     bd.show();
//     cout << endl;
//     ac.show();
    return 0;
}