#include<iostream>
using namespace std;

void Merge ( int arr [] , int l , int mid, int r ) {
    int i = l , j = mid , k = 0;
    int merged [ r - l ];

    while ( i < mid && j < r ) {
        if ( arr [ i ] < arr [ j ])
            merged [ k++ ] = arr [ i++ ];
        else
            merged [ k++ ] = arr [ j++ ];
    }
     
    while ( i < mid )
        merged [ k++ ] = arr [ i++ ];
    while ( j < r )
        merged [ k++ ] = arr [ j++ ];

    for ( int k = 0 ; k < r - l ; k ++ )
        arr [ l + k ] = merged [ k ];
}

void MergeSort ( int arr [], int l , int r ) {
   
     
    if ( r - l == 1 ) 
            return;
        int mid = (l + r) / 2;
       
        MergeSort(arr, l, mid);
        MergeSort(arr, mid, r);

        Merge(arr, l, mid, r);
      
}

int main() {

    int arr[] = { 8,1,2,4,0,3,5,6};
    int n = 8;
    MergeSort(arr,0,n );
    
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    
    return 0;
}