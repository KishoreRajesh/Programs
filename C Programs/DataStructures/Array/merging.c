#include <stdio.h>

int main(){
    int n1, n2, n3, i, j;
    int a[10], b[10], c[20];
    printf("Enter the size of 1st Array : ");
    scanf("%d",&n1);
    printf("Enter the 1st array Elements :");
    for(i =0; i<n1; i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the size of 2nd Array : ");
    scanf("%d",&n2);
    printf("Enter the 2nd Array Elements : ");
    for(i =0; i<n2;i++){
        scanf("%d",&b[i]);
    }
    n3 = n1+n2;
    for(i =0; i<n1;i++){
        c[i] = a[i];
    }
    for(i =0; i<n2; i++){
        c[i+n1] = b[i];
    }
    printf("The merged Array : ");
    for(i =0; i<n3; i++){
        printf( "%d ",c[i] );
    }
    printf("\nFInal Array after sorting:\n");
    for(i =0; i<n3;i++){
        int temp;
        for(j = i+1;j<n3;j++){
            if(c[i] > c[j]){
                temp = c[i];
                c[i] = c[j];
                c[j] = temp;
            }
        }
    }
    for(i =0;i<n3; i++){
        printf("%d ",c[i]);
    }
    return 0;
}