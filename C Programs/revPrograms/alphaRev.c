#include<stdio.h>

int main(){
	int num;
	char ch = 65;
	
	printf( "Enter no of rows :" );
	scanf( "%d",&num );
	
	for(int i =0;i<num;i++){
		for(int j = num-i;j>0;j--){
			printf( " ");
		}
		ch=65;
		for(int k = 0;k<=i;k++){
			printf( "%c",ch );
			ch++;
		}
		ch--;
		for(int l = i;l>0;l--){
			ch--;
			printf( "%c",ch );	
		}
		printf( "\n");
	}
	return 0;
}