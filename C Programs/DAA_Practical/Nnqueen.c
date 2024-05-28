#include<stdio.h>
#include<stdlib.h>
void nqueen(int);
int place(int);
int x[20];
void main(){
    int n;
    printf("NQUEENPROBLEM");
    printf("\nEnter the number of queens:");
    scanf("%d",&n);
    printf("\nThe solutionsare:\n");
    nqueen(n);
}

void nqueen(int n){
    int k,i;
    k=1;
    while(k>0)  {
        x[k]=x[k]+1;
        while((x[k]<=n)&& (!place(k))){
            x[k]=x[k]+1;
        }
        if(x[k]<=n){
            if(k==n){
                
                for(i=1;i<=n;i++){
                    printf("%d",x[i]);
                }
                printf("\n");
            }
            else{
                k=k+1;
                x[k]=0;
            }
        }
        else{
            k=k-1;
        }
    }
}

int place(int k){
    int i;
    for(i=1;i<=k-1;i++){
        if((x[i]==x[k])||((abs(x[i]-x[k]))==(abs(i-k)))){
            return(0);
        }
    }
return(1);
}