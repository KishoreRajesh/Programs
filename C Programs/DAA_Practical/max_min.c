#include<stdio.h>
void getMax(int []);
void getMin(int []);
int n;

int main(){
    printf( "Enter no of elements to be entered : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter Elements:\n");
    for(int i =0; i<n;i++){
        scanf("%d",&arr[i]);
    }
    getMax(arr);
    getMin(arr);
    return 0;
}

void getMax(int arr[]){
    int max = 0;
    for(int i =0; i<n; i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    printf("The Largest number is %d\n",max);
}

void getMin(int arr[]){
    int min = 10000;
    for(int i = 0; i< n; i++){
        if(arr[i]<min){
            min = arr[i];
        }
    }
    printf("The smallest number is %d\n",min);
}