#include<stdio.h>

int graph[7][7]= {{99,28,99,99,99,10,99},
                    {28,99,16,99,99,99,14},
                    {99,16,99,12,99,99,99},
                    {99,99,12,99,22,99,18},
                    {99,99,99,22,99,25,24},
                    {10,99,99,99,25,99,99},
                    {99,14,99,18,24,99,99}
                };

int x[7],y[7];


int main(){
    x[0]= 0;
    int x_size = 1;
    int y_size = 6;
    int minvertex;
    int i=0;
    for(int p=1;p<7;p++){
        y[i]=p;
        i++;
    }
    int min = 99;
    for(int i = 0; i < x_size; i++){
        for(int j =0; j< y_size; j++){
            if(min > graph[i][j]){
                min = graph[i][j];
                minvertex = j;
            }
        }
    }
    x[x_size]= minvertex;
    x_size++;



    return 0;
}