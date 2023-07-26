#include<stdio.h>
#include<stdlib.h>

#define MAX 10

struct stack {
	int numbers[MAX];
	int top;
};
typedef struct stack s1;

void createEmptyStack();
void push();
void pop();
int isFull();
int isEmpty();
void printStack();
int count = MAX;

int main (){
	s1 *s = (s1 *)malloc(sizeof(s1));
	
	createEmptyStack();
	
	push(s,10);
	push(s,20);
	push(s,30);
	push(s,40);
	push(s,50);
	
	printStack(s);
	
	pop(s);
	pop(s);
	pop(s);
	pop(s);
	pop(s);
	pop(s);
	
	printf( "\nAfter poping numbers...\n" );
	printStack(s);
}
void createEmptyStack(s1 *s){
	s->top=-1;
	for(int i=0;i<count;i++){
        s->numbers[i] = 0;
	}
}

int isFull(s1 *s){
	if(s->top==MAX-1){
		return 1;
	}else{
		return 0;
	}
}

int isEmpty(s1 *s){
	if(s->top==-1){
		return 1;
	}else{
		return 0;
	}
}

void push(s1 *s ,int newIn){
	if(isFull(s)){
		printf( "Stack full..." );
	}else{
		s->top++;
		s->numbers[s->top]=newIn;
	}
// 	count++;
}

void pop(s1 *s){
	if(isEmpty(s)){
		printf( "Stack Empty..." );
	}else{
		printf( "Item Deleted : %d\n",s->numbers[s->top] );
		s->numbers[s->top]=0;
		s->top--;
	
	}
// 	count--;
}

void printStack(s1 *s){
	printf( "Stack Contains : " );
	for(int i=0;i<count;i++){
		printf( "%d  ",s->numbers[i] );
	}
	printf( "\n" );
}

