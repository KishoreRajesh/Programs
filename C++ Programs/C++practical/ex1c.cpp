#include<iostream>
using namespace std;

int main(){
    char smvec[5] = {'S','M', 'V', 'E', 'C'};
    for(int i = 0; i<5;i++ ){
        for(int j =0;j<=i;j++){
            cout << smvec[j] << " ";
        }
        cout << endl;
    }
    return 0;
}