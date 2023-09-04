#include <iostream>
using namespace std;

class dynamicArray{
    int size ;
    int capacity;
    int* arr;

    public :
        dynamicArray(){
            capacity = 1;
            size = 0;
            arr = new int [capacity];
        }
        dynamicArray(int capacity){
            this ->capacity = capacity;
            size =0;
            arr = new int [capacity];
        }
        void push(int value){
            if(size == capacity){
                grow();
            }
            arr[size] = value;
            size ++;
        }
        void pop(){
            arr[size - 1] = 0;
            size --;
            if(size ==(capacity/2) ){
                shrink();
            }
        }
        void grow(){
            int* temp = new int [capacity *2];
            capacity = capacity *2;
            for(int i = 0; i< size ;i++){
                temp[i] = arr[i];
            }
            delete[] arr;
            arr = temp;
        }
        void shrink(){
            capacity = size ;
            int* temp = new int [capacity];
            for(int i =0;i<= capacity; i++){
                temp[i] = arr[i];
            }
            delete[] arr;
            arr = temp;
        }
        void insertAt(int index,int value){
            if(size == capacity){
                grow();
            }
            for(int i =size -1; i >= index;i--){
                arr[ i+1 ] = arr[i];
            }
            arr[index] = value;
            size++;
        }
        void deleteAt(int index){
            for(int i =index;i < size; i++){
                arr[i]=arr[i+1];
            }
            arr[size - 1] =0;
            size --;
            if(size == (capacity/2)){
                shrink();
            }
        }
        int getCapacity(){
            return capacity;
        }
        int getSize(){
            return size;
        }
        void printArr(){
            cout << "Elements in the array Are,"<< endl;
            for(int i =0;i<size;i++){
                cout << arr[i]<< " " ;
            }
            cout << "\nSize of array:" << getSize() << endl << "Capacity of array:" << getCapacity() << endl;
        }
};

int main(){
    
    dynamicArray arr;
    arr.push(1);
    arr.push(2);
    arr.push(3);
    arr.push(4);
    arr.push(5);
    arr.push(6);
    arr.push(7);
    arr.push(8);
    arr.push(9);
    arr.push(10);
    arr.push(11);
    arr.printArr();
    arr.insertAt(2,113);
    arr.printArr();
    arr.shrink();
    arr.printArr();
    arr.deleteAt(2);
    arr.printArr();
    
    return 0;
}