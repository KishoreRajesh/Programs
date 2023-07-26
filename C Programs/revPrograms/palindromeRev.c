#include<stdio.h>

int isPalindrome(int);

int main(){
	int number; 
	printf( "\n--------------PALINDROME---------------\n" );
	printf( "Enter a number :" );
	scanf( "%d",&number );
	printf( "---------------------------------------\n" );
	printf( "RESULT :\n" );
	//isPalindrome function is both sending 
	//and receiving number variable and applying to condition		
	if(isPalindrome(number) == 1){
		printf( "\tIt is a palindrome...\n" );	
	}else{
		printf( "\tIt is not a palindrome...\n" );
	} 
	printf( "\n---------------------------------------\n" );
	return 0;
} 

int isPalindrome(int num){
	int temp, reverse = 0, remainder = 0;
	
	temp = num;
	while(temp != 0){
		remainder = temp % 10;//it breaks each digit from the number as remainder 
		reverse = reverse * 10 + remainder;//it stores the number in reverse order 
		temp /= 10;//it further breaks the number and gives the quotient to the next cycle
	}
	//when the temp variable reaches 0 it breaks the loop and the condition is checked;
	if( reverse == num ){
		return 1;
	}else{
		return 0;
	}
}