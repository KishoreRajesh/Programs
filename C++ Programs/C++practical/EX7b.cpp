#include<iostream>
using namespace std;

class inverse{
public:
    int val1 ;
    int val2;
    inverse(int v){
        val1 = v;
        cout << "Enter value 2: ";
        cin >> val2;
    }
    void operator ++(){
        val1 += val2;
    }
    void display(){
        cout << " Value = " << val1 << endl;
    }
};

int main(){
    int ee ;
    cout << "Enter value 1: ";
    cin >> ee;
    inverse re(ee);
    ++re;
    re.display();
    return 0;
}