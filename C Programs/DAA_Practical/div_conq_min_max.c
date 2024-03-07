#include<stdio.h>

int min(int a[],int low, int high){
    if(low<high){
        int mid = (low + high)/2;
        int min1 = min(a,low,mid);
        int min2 = min(a,mid+1,high);
        if(min1<min2){
            return min1;
        }else{
            return min2;
        }
    }
    return a[low];
}

int max(int a[],int low, int high){
    if(low<high){
        int mid = (low + high)/2;
        int max1 = max(a,low,mid);
        int max2 = max(a, mid+1,high);
        if(max1<max2){
            return max2;
        }else{
            return max1;
        }
    }
    return a[low];
}

int main(){
    int a[] = {8,3,5,6,2};
    int minimun =0,maximun = 0;
    minimun = min(a,0,4);
    maximun = max(a,0,4);
    printf("\n\n\n------------------FINDING MAXIMUM AND MINIMUM ELEMENT IN THE GIVEN ARRAY USING DIVIDE AND CONQUER METHOD-----------------------\n");
    printf("\n\nThe min value in the array is %d\n",minimun);
    printf("\n\nThe max value in the array is %d",maximun);
    printf("\n\n\n");
    return 0;
}