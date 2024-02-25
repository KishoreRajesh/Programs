#include<stdio.h>

int main(){
    int r;
    printf("Enter no of rows : ");
    scanf("%d",&r);
    int mspace = r-1;
    int lspace = 0;
    for(int i =r; i>=1;i--){
        for(int j = 0; i<lspace;i++){
            printf(" ");
        }
        lspace++;
        printf("*");
        for(int k = 0 ; k <= mspace; i++){
            printf(" ");
        }
        mspace--;
    }
    return 0;
}