#include<stdio.h>
#include<math.h>

int isArmstrong(int);
int count;

int main(){
	int number; 
	printf( "\n--------------ARMSTRONG---------------\n" );
	printf( "Enter a number :" );
	scanf( "%d",&number );
	printf( "---------------------------------------\n" );
	printf( "RESULT :\n" );
	//isPalindrome function is both sending 
	//and receiving number variable and applying to condition		
	if(isArmstrong(number) == 1){
		printf( "\tIt is a armstrong number...\n" );	
	}else{
		printf( "\tIt is not a armstrong number ...\n" );
	} 
	printf( "\n---------------------------------------\n" );
	return 0;
} 

int isArmstrong(int num){
	int temp, armstrong = 0, remainder = 0;
	
	temp = num;
	temp1 = num;
	while(temp1 != 0){
		temp1 /= 10;
		count++;
	}
	while(temp != 0){
		remainder = temp % 10;//it breaks each digit from the number as remainder 
		armstrong = armstrong + pow(remainder,count);//it stores the number in reverse order 
		temp /= 10;//it further breaks the number and gives the quotient to the next cycle
	}
	//when the temp variable reaches 0 it breaks the loop and the condition is checked;
	printf( "%d",armstrong );
	if( armstrong == num ){
		return 1;
	}else{
		return 0;
	}
}
