#include<stdio.h>
#include<conio.h>
#define start main

int start(){
	char sentence[50];
	printf( "---------------PROGRAMMING WITHOUT MAIN() FUNCTION------------------\n" );
	printf( "\nEnter a sentence :" );
	gets(sentence);
	printf( "\n\n-------------------------------------------------------------------\n" );	
	printf( "\nDisplaying sentence : %s\n",sentence );
	printf( "\n-------------------------------------------------------------------\n" );
	
	return 0;
} 