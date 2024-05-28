#include<iostream>
using namespace std;

int JobSequencing ( int profit[] , int deadline [] , int n  ) {

    int result [ n ] , temp , in = 0,maxprofit = 0 ; // store the sequence;
    bool slot [ n ]; 
    
    for ( int i = 0 ; i < n ; i++ ) 
        slot [ i ] = false;

    for ( int i = 0 ; i < n - 1 ; i++ ) {

        for ( int j = i + 1 ; j < n ; j++ ) {
            
            if ( profit[ i ] < profit[ j ] ) {

                temp = profit [ i ];
                profit[ i ] = profit[ j ];
                profit[ j ] = temp;

                temp = deadline[ i ];
                deadline[ i ] = deadline[ j ];
                deadline[ j ] = temp;
            }
        }
    }

    for ( int i = 0 ; i < n ; i++ ) {

        int s = n > deadline[ i ] ? deadline[ i ] : n ;
        for ( int j = s - 1 ; j >= 0 ; j-- ) {

            if ( !slot[ j ]) {
                slot[ j ] = true;
                result [ in++ ] = i;
                maxprofit += profit[ i ];
                break;
            }
        }
    }
 
    return maxprofit;
}

int main() {

        int a[] = {50, 30, 40, 25}; // Profit values
        int b[] = {2, 1, 3, 1};      // Deadline values

        cout << JobSequencing ( a , b , 4 );
}