#include<stdio.h>
#include<conio.h>
int sum(int k);

int main (){
    int result = sum(10);
    printf("%d",result);
    getch();
    return 0; 
}
int sum(int k){
    if(k>0){
        return k + sum (k-1);
    }else{
        return 0;
    }
}