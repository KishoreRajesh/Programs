#include<iostream>
using namespace std;

int main(){
    int rows;
    cout << "Enter no of rows : ";
    cin >> rows;

    for(int i=1;i<=rows;i++){
        for(int k=rows;k>=0;k--){
            cout << " ";
        }
        for(int j=1;j<=i;j++){
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}