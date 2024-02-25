#include<stdio.h>
int n;
int key;

void binary_search(int arr[]){
    int itr=0;
    printf("Enter Element to Find : ");
    scanf("%d",&key);
    int l = 0, h = n-1,m;
    while(h>=l){
        itr++;
        m = (h+l)/2;
        if(key == arr[m]){
            printf("Element found \n");
            printf("Element found at index %d\n",m);
            printf("Number of iteration used is %d\n",itr);
            break;
        }else if(key < arr[m]){
            h = m-1;
        }
        else if(key > arr[m]){
            l = m+1;
        }
    }
}

int main(){
    printf("-------------------BINARY SEARCH---------------------\n");
    printf( "Enter no of elements to be entered : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter Elements:\n");
    for(int i =0; i<n;i++){
        scanf("%d",&arr[i]);
    }
    binary_search(arr);
    return 0;
}

