#include<stdio.h>
#include<conio.h>

int main(){
	char userString[50];
	char revString[50];
	int i, j, count;
	printf( "-----------------REVERSING THE SENTENCE-------------------\n" );
	printf( "\nEnter a word:" );
	gets(userString);
	for(count =0;userString[count] !='\0';count++);
	for(j=count-1,i=0;j>=0;j--,i++){
		revString[i]=userString[j];
	}
	revString[i]='\0';
	printf( "\n----------------------------------------------------------\n" );
	printf( "\nThe Reversed word : %s\n",revString );
	printf( "\n----------------------------------------------------------\n" );	
	return 0;
}