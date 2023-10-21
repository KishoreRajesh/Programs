#include<stdio.h>

int main(){
    int i, a[50],  n, size;
    printf("Enter Size :");
    scanf("%d",&size);
    printf("Enter the %d elements in array",size);
    for(i =0; i<size; i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the Element to find :");
    scanf("%d",&n);
    for(i=0; i< size; i++){
        if(a[i] == n){
            printf("%d is present in %d position", n, i);
            break;
        }
    }
    if(i == size){
        printf("%d is not found", n);
    }
    return 0;
}