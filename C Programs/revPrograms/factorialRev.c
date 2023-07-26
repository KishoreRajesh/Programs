#include<stdio.h>

int main(){
	int userIn;
	int temp =1;
	printf( "--------------FINDING FACTORIAL OF A NUMBER ------------------\n" );
	printf( "\nEnter a digit :" );
	scanf( "%d",&userIn );
	for(int i = userIn; i>=1; i--){
		temp = temp * i;
	}
	printf( "\n--------------------------------------------------------------\n" );
	printf( "\nRESULT = %d\n", temp );
	printf( "\n--------------------------------------------------------------\n" );
	return 0;
}  