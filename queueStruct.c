#include<stdio.h>
#define MAX 10
int queue[MAX];
int front=-1 , rear=-1;

int enQueue(int);
void deQueue();
void display();

int main(){
	enQueue(10);
	enQueue(20);
	enQueue(30);
	enQueue(40);
	enQueue(50);
	
	display();
	
	deQueue();
	deQueue();
	deQueue();
	
	display();
	
	return 0;
}

int enQueue(int block){
	if(rear == MAX -1){
		printf( "The Queue is full...\n" );
	}else{
		if(front==-1){
			front = 0;
		}
		rear++;
		queue[rear]=block;
		printf( "the inserted item is : %d\n",queue[rear] );
	}
}

void deQueue(){
	if(rear == -1){
		printf( "The queue is empty...\n" );		
	}else{
		printf( "\nThe Dequeued item is : %d", queue[front]);
		front++;
		if(front>rear){
			front = rear = -1;
		}
	}
}

void display(){
	if(rear == -1){
		printf( "The queue is Empty..\n" );
	}else{
		printf( "\nThe blocks in the queue are :" );
		for(int i=front ; i<MAX-1 ; i++ ){
			printf( "%d ",queue[i] );
		}
	}
}