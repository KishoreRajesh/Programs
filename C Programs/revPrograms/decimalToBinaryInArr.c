#include<stdio.h>

int convertion(int);
int arr[8];
void display();

int main(){
	int num;
	
	printf( "Enter a decimal value :" );
	scanf( "%d",&num );
	
	convertion(num);
	printf( "The Binary value for %d = ",num );
	display();
	return 0;
}

int convertion(int n){
	int i=1, result = 0, remainder, j=8;
	
	while(n != 0){
		remainder = n%2;
		n /= 2;
		arr[j-1]= remainder;	
		j--;	
	}
	return 0;	
}

void display(){
	for(int i = 0;i < 8;i++){
		printf( "%d ",arr[i] );
	}
}