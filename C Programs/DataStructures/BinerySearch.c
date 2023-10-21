#include<stdio.h>
 
int main(){
    int a[5] = {10, 20, 30, 40, 50};
    int key =50, flag =0,low =0, high =4, mid;
    while(low <= high){
        mid = (high+low)/2;
        if(key == a[mid]){
            flag =1;
            break;
        }else if(key < a[mid]){
            high = mid -1;
        }else {
            low = mid +1;
        }
    }
    if(flag == 1){
        printf("Element found");
    }else{
        printf("Element not found....");
    }
    return 0; 
}