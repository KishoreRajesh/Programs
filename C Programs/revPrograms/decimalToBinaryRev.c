#include<stdio.h>

long long convertion(int);

int main(){
	int number;
	
	printf( "Enter a Decimal value :" );
	scanf( "%d",&number );
	
	long long ans = convertion(number);
	
	printf( "The binary value for %d is %d", number, ans );
	
	return 0;
}

long long convertion(int n){
	int result = 0, remainder, i = 1; 
	while(n != 0){
		remainder = n%2;
		n /= 2;
		result = result + remainder *i;
		i *= 10;
	}
	return result;
}

