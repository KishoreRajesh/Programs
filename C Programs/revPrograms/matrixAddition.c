#include<stdio.h>

int main(){
	int c =2, r =2;
	int arr1[r][c];
	int arr2[r][c];
	int ansArr[r][c];
	
	printf( "-------------------MATRIX ADDITION----------------------\n" );
	printf( "\nEnter the first Matrix elements :\n" );
	for(int i = 0;i < r;i++){
		for(int j = 0;j < c;j++){
			printf( "Enter the [%d][%d] Element :",i ,j );
			scanf( "%d",&arr1[i][j] );
		}
	}
	printf( "Enter the second Matrix elements :\n" );	
	for(int i = 0;i < r;i++){
		for(int j = 0;j < c;j++){
			printf( "Enter the [%d][%d] Element :",i ,j );
			scanf( "%d",&arr2[i][j] );
		}
	}
	for(int i = 0;i < r;i++){
		for(int j = 0;j < c;j++ ){
			ansArr[i][j] = arr1[i][j] + arr2[i][j];
		}
	}
	printf( "\n---------------------------------------------------------\n" );
	printf( "Displaying Answer Matrix :\n\n" );
	for(int i = 0;i < r;i++){
		for(int j = 0;j < c;j++){
			printf( "%d ",ansArr[i][j] );
		}
		printf( "\n" );
	}
	printf( "\n---------------------------------------------------------\n" );
	
	return 0;
}