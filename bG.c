#include<stdio.h>
#include<string.h>

char productName[6][10]={ "Milk", "Biscuit", "Choco", "Water", "Cake",};
double productPrice[50]={ 24.50, 15.34, 2.50, 12.50, 350.50};
int quantity[50];
int userIn[30];
int choice = 1;
void display();
void input();
void billGeneration();
int count;
int fchoice=1;

int main(){
	int i;
	display();
	printf( "Press 0 to exit window and 1 to continue billing :\n" );
	scanf( "%d",&fchoice );
	if(fchoice==0){
		printf( "exited....\n");
	}else if(fchoice==1){
	input();
	for(i=0;i<count;i++){
		printf( "%d",userIn[i]);
	}
	printf("\n");
	billGeneration();
	}
	return 0;
}

void display(){
	int i;
	printf("---------GROCARY STORE----------\n");
	printf( "S.no\tITEM\t\tPRICE\t\n" );
	printf( "--------------------------------\n" );
	for(i=0;i<5;i++){
	printf( "%d\t%s\t\t%.2lf\t\n", i+1, productName[i], productPrice[i] );
	}
	printf( "--------------------------------\n" );
}

void input(){
	int i=0;
	while(choice == 1){
		printf( "Enter the product Number :" );
		scanf( "%d",&userIn[i] );
		printf( "Enter the quantity of product :" );
		scanf( "%d",&quantity[i] );
		count++;
		printf( "\nPress 1 to continue.." );
		scanf( "%d",&choice );
		i++;
		if(choice==0){
			break;
		}		
	}
}

void billGeneration(){
	int i=0;
	double price;
	double grandTotal;
	printf( "----------------------Bill----------------------|" );
	printf( "\nS.no\tITEM\tQUANTITY\tMRP\tPRICE\t|\n" );
	printf( "------------------------------------------------|\n" );
	for(i=0;i<count;i++){
		price= quantity[i]*productPrice[userIn[i]-1];
		printf( "%d\t%s\t%d\t\t%.2lf\t%.2lf\t|\n", i+1, productName[userIn[i]-1], quantity[i], productPrice[userIn[i]-1], price );
		grandTotal+=price;
	}
	printf( "------------------------------------------------|" );
	printf( "\nGRAND TOTAL = %.3lf\t\t\t\t|",grandTotal );	
	printf( "\n------------------------------------------------|" );
}