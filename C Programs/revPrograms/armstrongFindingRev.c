#include<stdio.h>
#include<math.h>

int isArmstrong(int);
int armstrongNum(int, int);
//int count =0;

int main(){
	int num1, num2; 
	printf( "\n--------------ARMSTRONG---------------\n" );
	printf( "Enter lower limit :" );
	scanf( "%d",&num1 );
	printf( "Enter upper limit :" );
	scanf( "%d",&num2 );	
	printf( "---------------------------------------\n" );
	printf( "The available Armstrong numbers b/w the mentioned limit are, \n" );
	for (int i=num1; i<=num2;i++){
	    //printf( "%d %d \n",isArmstrong(i), i );
		if(isArmstrong(i) == 1){
			printf( " %d  ", i );
		}
		//printf( "exited if...\n" );
	}
//	if(isArmstrong(number) == 1){
//		printf( "\tIt is a armstrong...\n" );	
//	}else{
//		printf( "\tIt is not a armstrong...\n" );
	//} 
	printf( "\n---------------------------------------\n" );
	return 0;
} 

int isArmstrong(int num){
	int temp, temp1, armstrong = 0, remain = 0;
	int count = 0;
	temp = num;
	temp1 = num;
	while(temp1 != 0){
		temp1 /= 10;
		count++;
	}
	//printf("COUNT - %d\n", count);
	while(temp != 0){
		remain = temp % 10;//it breaks each digit from the number as remainder 
		armstrong = armstrong + pow(remain,count);//it stores the number in reverse order 
		temp /= 10;//it further breaks the number and gives the quotient to the next cycle
	}
	//printf("Arms - %d  \n", armstrong );
	//when the temp variable reaches 0 it breaks the loop and the condition is checked;
	//printf( "%d",armstrong );
	if( armstrong == num ){
		return 1;
	}else{
		return 0;
	}
}