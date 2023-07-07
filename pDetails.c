#include<stdio.h>
int main(){
	int age ;
	char name[20];
	double mark ;
	
	printf("Enter your Name : \n");
	scanf("%s",&name);
	printf("Enter your age ; \n ");
	scanf("%d",&age);
	printf("Enter your mark ; \n");
	scanf("%lf",&mark);
	
	printf("Name\t Age\t mark\t\n");
	printf("%s\t %d\t %lf\t",name, age , mark);
	return 0;	
}