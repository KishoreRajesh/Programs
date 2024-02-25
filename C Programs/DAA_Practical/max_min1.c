#include<stdio.h>
int n;
int main(){
    printf("Enter no of elements : ");
    scanf("%d",&n);
    int arr[n];
    int mid = n/2;
    for(int a = 0 ; a < n ; a++){
        printf("arr[%d] = ",a);
        scanf("%d",&arr[a]);
    }
    int min1,min2;
    int max1,max2;
    min1 = arr[0], min2 = arr[mid+1];
    max1 = arr[0], max2 = arr[mid+1];

    for(int i =0; i<=mid; i++){
        if(min1>arr[i]){
            min1 = arr[i];
        }
        if(max1<arr[i]){
            max1 = arr[i];
        }
    }
    for(int j = mid+1;j<n; j++){
        if(min2>arr[j]){
            min2 = arr[j];
        }
        if(max2<arr[j]){
            max2 = arr[j];
        }
    }
    printf("Maximum element of 1st half is %d\n",max1);
    printf("Maximum element of 2nd half is %d\n",max2);
    printf("Minimum element of 1st half is %d\n",min1);
    printf("Minimum element of 2nd half is %d\n",min2);
    if(max1<max2){
        printf("Overall maximum element is %d\n",max2);
    }else{
        printf("Overall maximum element is %d\n",max1);
    }
    if(min1>min2){
        printf("Overall minimum element is %d\n",min2);
    }else{
        printf("Overall minimum element is %d\n",min1);
    }
    return 0;
}