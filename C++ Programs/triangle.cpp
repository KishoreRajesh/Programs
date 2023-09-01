#include <iostream>
using namespace std;

int main(){
    int rows ;
    cout << "Enter No of Rows :";
    cin >> rows;

    for(int i = 1; i<=rows; i++){
        for(int j = rows -1;j>0;j--){
            cout << " ";
        }
        for(int k = 1;k <= i ;k++){
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}
