#include<stdio.h>

int main(){
	int num1 = 0, num2 = 1, nextNum = num1+num2, row;
	
	printf( "Enter no of rows :" );
	scanf( "%d",&row );
	
	for(int i =0;i<row;i++){
		for(int k = row;k>i;k--){
			printf( " ");
		}
		num1 =0;
		num2 =1;
		printf( "%d ",num2 );
		for(int j=0;j<i;j++){
			nextNum= num1 + num2;
			printf( "%d ",nextNum );
			num1 = num2;
			num2 = nextNum;

			
		}
		printf( "\n" );
	}
	return 0;
}