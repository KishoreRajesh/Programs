#include<iostream>
using namespace std;

void QuickSort ( int arr[] , int low , int high ) {

    if ( low >= high )
        return;

    int start ,end , mid ,pivot,temp;
    start = low;
    end = high;
    mid = ( low + high ) / 2;
    pivot = arr [ mid ];

    while ( start <= end ) {

        while ( arr [ start] < pivot )
            start++;
    
        while(arr [ end ] > pivot )
            end--;

        if ( start <= end ) {

                temp = arr [ start ];
                arr [ start ] = arr [ end ];
                arr [ end ] = temp;
                start++;
                end--;
        }
    }
    QuickSort ( arr , low , end );
    QuickSort ( arr , start , high );
}

int main() {

    int a[] = {4 ,2 , 5 , 1 , 0 , 10 , 6};
    QuickSort(a , 0 , 6 );
    for ( int i = 0 ; i < 7 ; i++) 
        cout << a [ i ] << " ";
}