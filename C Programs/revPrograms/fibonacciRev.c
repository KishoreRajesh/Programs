#include<stdio.h>

int main(){
	int num1, num2, nextNum,quantity;
	printf( "-------------------------FINDING FIBONACCI SERIES-------------------------\n" );
	printf( "Enter the first Number :" );
	scanf( "%d",&num1 );
	printf( "\nEnter the second Number :" );
	scanf( "%d",&num2 );
	printf( "Enter the no of elements required :" );
	scanf( "%d",&quantity );
	printf( "\n--------------------------------------------------------------------------\n" );
	printf( "\nThe Fibonacci series from  %d is ,\n", num1 );
	nextNum = num1 + num2;
	printf( "\t%d\n\t%d\n",num1, num2 );
	for(int i = 2;i<quantity;i++){
		printf( "\t%d\n",nextNum );
		num1 = num2;
		num2 = nextNum;
		nextNum = num1 + num2;
	}
	printf( "\n--------------------------------------------------------------------------\n" );	
	return 0;
}