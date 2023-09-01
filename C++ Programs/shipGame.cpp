#include <iostream>
using namespace std;
void showMap();
void procedure();
int row ;
int colomn;
int gameMap [4][4] = {
    {0 ,0 ,0 ,1 },
    {1 ,1 ,0 ,0 },
    {0 ,0 ,0 ,1 },
    {0 ,0 ,0 ,0 }
};

int main (){
    showMap();
    procedure();
    showMap();
    procedure();
    showMap();
    procedure();
    showMap();
    procedure();
    showMap();
    cout << "\nYou have won this Level ......";
    return 0;
}

void showMap(){
     for(int i =0;i < 4 ; i++){
        for(int j = 0;j < 4;j++){
            cout << gameMap[i][j];
        }
        cout << "\n";
    }
}
void procedure(){
    cout << "Selecting Coordinates :";
    cout << "\nEnter a row btw 0 and 3 :";
    cin >> row;
    cout << "\n Enter a column btw 0 and 3 :";
    cin >> colomn;

    if(gameMap[row][colomn] == 1){
        gameMap[row][colomn] = 0;
        cout << "hit!!!!!!!\n";
    }else {
        cout << "Missed ....";
    }
}