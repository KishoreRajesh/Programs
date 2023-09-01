#include<stdio.h>

int main(){
	int userIn;
	// char arr[userIn];
	
	printf( "Enter no of rows :" );
	scanf( "%d",&userIn );
	
	for(int i =1;i<=userIn;i++){
		for(int k =userIn-i;k > 0;k--){
			printf( " " );
		}
		for(int j = 1;j <= i;j++){
			printf( "* " );	
		}
		printf( "\n" );
	}
	for(int i = userIn-1;i>=0;i--){
		for(int k = 0;k<userIn-i;k++){
			printf( " " );
		}
		for(int j = i;j>0;j--){
			printf( "* ");
		}
		printf( "\n" );
	}
	

	return 0;
}
