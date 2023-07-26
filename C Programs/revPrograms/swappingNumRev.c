#include<stdio.h>

int main(){
	int num1;
	int num2;
	
	printf( "Enter the first Number :" );
	scanf( "%d",&num1 );
	printf( "Enter the second Number :" );
	scanf( "%d",&num2 );	
    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;
    printf( "The numbers are swapped as , %d and %d",num1 ,num2 );
    return 0;
}