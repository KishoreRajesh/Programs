/*#include<stdio.h>

int main(){
    char one[3][3] ={{" "," "," "},
                     {" "," ","|"},
                     {" "," ","|"}} ;

    char two[3][3] ={{" ","_"," "},
                     {" ","_","|"},
                     {"|","_",""}};

    char three[3][3]= {{" ","_"," "},
                       {" ","_","|"},
                       {" ","_","|"}};

    char four[3][3]={{" "," "," "},
                     {"|","_","|"},
                     {" "," ","|"}};

    char five[3][3]={{" ","_"," "},
                     {"|","_"," "},
                     {" ","_","|"}};

    char six[3][3] ={{" ","_"," "},
                     {"|","_"," "},
                     {"|","_","|"}};

    char seven[3][3]={{" ","_"," "},
                      {" "," ","|"},
                      {" "," ","|"}};

    char eight[3][3]={{" ","_"," "},
                      {"|","_","|"},
                      {"|","_","|"}};

    char nine[3][3] ={{" ","_"," "},
                      {"|","_","|"},
                      {" ","_","|"}};

    char zero[3][3]={{" ","_"," "},
                     {"|"," ","|"},
                     {"|","_","|"}};

    char add[3][3] = {{" "," "," "},
                      {"|","_"," "},
                      {"|"," "," "}};

    char sub[3][3]= {{" "," "," "},
                     {" ","_"," "},
                     {" "," "," "}};
                    
    char mul[3][3]= {{" "," "," "},
                     {"|","_","|"},
                     {"|"," ","|"}};

    char div[3][3]= {{" ","_"," "},
                     {" ","_"," "},
                     {" ","_"," "}};

    char equ[3][3]= {{" "," "," "},
                     {" ","_"," "},
                     {" ","_"," "}};

    char test[3][3];

    for(int i = 0;i<3;i++){
        for(int j = 0;j<3;j++){
            scanf("%c",&test[i][j]);
        }
    }
    int count = 0;
    for(int i = 0;i<3;i++){
        for(int j = 0;j<3;j++){
            if(one[i][j] == test[i][j]){
                count++;
            }
        }
    }

    if(count == 9){
        printf("1");
    }
    return 0;
}*/



#include <stdio.h>

int compare(char pattern[3][3], char test[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (pattern[i][j] != test[i][j]) {
                return 0;
            }
        }
    }
    return 1;
}

int main() {
    // Digit patterns
    char zero[3][3] = {{' ', '_', ' '},
                       {'|', ' ', '|'},
                       {'|', '_', '|'}};

    char one[3][3] = {{' ', ' ', ' '},
                      {' ', ' ', '|'},
                      {' ', ' ', '|'}};

    char two[3][3] = {{' ', '_', ' '},
                      {' ', '_', '|'},
                      {'|', '_', ' '}};

    char three[3][3] = {{' ', '_', ' '},
                        {' ', '_', '|'},
                        {' ', '_', '|'}};

    char four[3][3] = {{' ', ' ', ' '},
                       {'|', '_', '|'},
                       {' ', ' ', '|'}};

    char five[3][3] = {{' ', '_', ' '},
                       {'|', '_', ' '},
                       {' ', '_', '|'}};

    char six[3][3] = {{' ', '_', ' '},
                      {'|', '_', ' '},
                      {'|', '_', '|'}};

    char seven[3][3] = {{' ', '_', ' '},
                        {' ', ' ', '|'},
                        {' ', ' ', '|'}};

    char eight[3][3] = {{' ', '_', ' '},
                        {'|', '_', '|'},
                        {'|', '_', '|'}};

    char nine[3][3] = {{' ', '_', ' '},
                       {'|', '_', '|'},
                       {' ', '_', '|'}};

    // Operator patterns
    char add[3][3] = {{' ', ' ', ' '},
                      {' ', '_', ' '},
                      {'|', '_', '|'}};

    char sub[3][3] = {{' ', ' ', ' '},
                      {' ', '_', ' '},
                      {' ', ' ', ' '}};

    char mul[3][3] = {{' ', ' ', ' '},
                      {'|', '_', '|'},
                      {'|', ' ', '|'}};

    char div[3][3] = {{' ', ' ', '|'},
                      {' ', '_', ' '},
                      {'|', ' ', ' '}};

    char equ[3][3] = {{' ', ' ', ' '},
                      {' ', '_', ' '},
                      {' ', '_', ' '}};

    // Input pattern
    char test[3][3];
    printf("Enter a 3x3 character pattern:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf(" %c", &test[i][j]);
        }
    }

    // Check against all patterns
    if (compare(zero, test)) printf("0\n");
    else if (compare(one, test)) printf("1\n");
    else if (compare(two, test)) printf("2\n");
    else if (compare(three, test)) printf("3\n");
    else if (compare(four, test)) printf("4\n");
    else if (compare(five, test)) printf("5\n");
    else if (compare(six, test)) printf("6\n");
    else if (compare(seven, test)) printf("7\n");
    else if (compare(eight, test)) printf("8\n");
    else if (compare(nine, test)) printf("9\n");
    else if (compare(add, test)) printf("+\n");
    else if (compare(sub, test)) printf("-\n");
    else if (compare(mul, test)) printf("*\n");
    else if (compare(div, test)) printf("/\n");
    else if (compare(equ, test)) printf("=\n");
    else printf("Unrecognized pattern\n");

    return 0;
}