#include<iostream>
using namespace std;

float MaxProfit ( int n , int m , int profit[] , int weight[] ) {

    float maxprofit = 0.0;
    float  ratio [ n ], temp1;
    int index [ n ] , temp ,cur = 0;

    for ( int i = 0 ; i < n ;i++ ) 
        ratio[ i ] =  ( float )  profit [ i ] / weight [ i ] ;

    for ( int i = 0 ; i < n ;i++ )
        index[ i ] = i;

    for ( int i = 0 ; i < n - 1 ; i++ )  {

        for ( int j = i + 1 ; j < n ; j++ ) {

            if ( ratio [ i ] < ratio [ j ] ) {

                temp1 = ratio[ i ];
                ratio[ i ] = ratio[ j] ;
                ratio[ j ] = temp1;

                temp = weight[ j ];
                weight[ j ] = weight [ i ];
                weight[ i ] = temp;

                
                temp = profit[ j ];
                profit[ j ] = profit [ i ];
                profit[ i ] = temp;

                
                temp = index[ j ];
                index[ j ] = index[ i ];
                index[ i ] = temp;
            }
        }
    }
    for ( int j = 0 ; j < n ; j++ ) {

        int in = index [ j ];
        if ( cur + weight [ in ] <= m ) {
            
            cur += weight[ in ];
            maxprofit += profit[ in ];
        }
        else {
            int rem = m - cur;
            maxprofit += profit[ in ] * ( (float)  rem / weight [ in ] );
            break;
        }
    }
    return maxprofit;
}

int main() {

    int a[] = { 60 , 100 , 120 }; // profit
    int b[] = { 10 , 20 , 30 }; // weight
    cout << "Maximum Profit : " << MaxProfit ( 3 , 30 , a , b );
}