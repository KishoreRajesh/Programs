#include <iostream>
using namespace std;

class matrix {
    int a [3][3];
public:
    void get();
    void display();
    void operator +(matrix x);
};

void matrix:: get(){
    cout << "\n Enter elements :";
    for (int i =0; i<3; i++){
        for(int j =0; j<3; j++){
            cout << " ";
            cin >> a[i][j];
        }
    }
}

void matrix :: display(){
    for (int i =0; i<3; i++){
        for(int j =0; j<3; j++){
            cout << a[i][j] << "\t";
        }
        cout << "\n";
    }
}

void matrix :: operator+(matrix x){
    int mat[3][3];
    for(int i =0; i< 3; i++){
        for(int j =0; j<3; j++){
            mat[i][j] = a[i][j] + x.a[i][j];
        }
    }
    cout << "Output : \n";
    for (int i =0; i<3; i++){
        for(int j =0; j<3; j++){
            cout << mat[i][j] << "\t";
        }
        cout << "\n";
    }
}

int main(){
    matrix m,n;
    m.get();
    n.get();
    cout << "Matrix 1 : \n";
    m.display();
    cout << "Matrix 2 : \n";
    n.display();
    m+n;
    return 0;
}