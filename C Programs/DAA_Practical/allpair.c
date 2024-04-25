#include<stdio.h>
void allpair(int g[3][3]){
    int k,i,j;
    for(k=0;k<3;k++){
        for(i=0;i<3;i++){
            for(j=0;j<3;j++){
                if(g[i][j]>g[i][k]+g[k][j]){
                    g[i][j]=g[i][k]+g[k][j];
                }
            }
        }
    }
    printf("the shortest path is:");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf(" %d",g[i][j]);
        }
        printf("\n");
    }
}
int main(){
    int g[3][3];
    int i,j;
    printf("enter the cost of the matrix:");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("g[%d][%d]",i,j);
            scanf("%d",&g[i][j]);
        }
    }
    allpair(g);
return 0;
}