#include <iostream>
using namespace std;

int main(){
    int baseNum, powNum;
    int answer = 1;
    cout << "Enter first Num :";
    cin >> baseNum;
    cout << "Enter Second Num :";
    cin >> powNum;
    for(int i =0; i<powNum; i++){
        answer = answer * baseNum;
    }
    cout << answer << endl;

    return 0;
}