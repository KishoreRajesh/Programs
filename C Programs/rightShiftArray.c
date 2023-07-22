#include<stdio.h>
int array[5]={1,2,3,4,5};
void rightShiftArray();
void display();
int main (){
	display();
	printf("\n");
	rightShiftArray();
	display();
	printf("\n");
	rightShiftArray();
	display();
	
	
}
void rightShiftArray(){
	int lastElement = array[4];
	int i;
	for(i=3;i>=0;i--){
		array[i+1]=array[i];
	}
	array[i+1]=lastElement;
}
void display(){
	int i;
	for(i=0;i<5;i++){
	printf("The values are %d\n",array[i]);	
	}	
}