#include<stdio.h>

void linear_search(int []);
int n;
int key;

int main(){
    printf( "Enter no of elements to be entered : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter Elements:\n");
    for(int i =0; i<n;i++){
        scanf("%d",&arr[i]);
    }
    linear_search(arr);
    return 0;
}

void linear_search(int arr[]){
    int itr=0;
    printf("Enter Element to Find : ");
    scanf("%d",&key);
    for(int i =0; i<n;i++){
        itr++;
        if(arr[i]==key){
            printf("Element found\n");
            printf("Element found at index %d\n",i);
            printf("Number of iteration used is %d\n",itr);
        }
    }
}