#include<iostream>
using namespace std;

void print(const int *const arr,size_t size){
    cout << "[ ";
    for(size_t i = 0;i < size; i++){
        cout << *(arr + i) << " " ;
    }
    cout << "]";
}

void printAll(const int *const arr,size_t size){
    for(size_t i =0;i < size; i++){
        cout << *(arr+i) << " ";
    }
}

int  * apply_all(const int *const arr1, size_t arr1Size, const int *const arr2, size_t arr2Size){
    
    int *arr3 = 0;
    arr3 = new int[arr1Size * arr2Size];
    int k =0;
    for(size_t i = 0; i < arr2Size; ++i){
        for(size_t j = 0; i < arr1Size; ++j){
            arr3[k] = arr1[j] * arr2[i];
            ++k;    
        }
    }  
    return arr3;
}

int main(){
    int *result = 0;
    int arr1[] = {1,2,3,4,5};
    int arr2[] = {10,20,30};
    cout << "array1 = " ; 
    print(arr1,5);
    cout << "\narray2 = " ; 
    print(arr2,3);
    cout << "\n";
    result = apply_all(arr1,5,arr2,3);
    printAll(result,15);
    delete[] result;   
    return 0;
}

