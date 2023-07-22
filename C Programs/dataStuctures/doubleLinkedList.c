#include<stdio.h>
#include<stdlib.h>

struct node {
	int data ;
	struct node *next;
	struct node *prev;
};
typedef struct node Node;

Node *head = NULL;
Node * nodeCreation(int);
void insertInFront();
void insertAfter(Node *,int,int);
void printlist();
void insertEnd(Node *,int);


Node *nodeCreation(int item){
	Node *newItem = (Node *)malloc(sizeof(Node *));
	newItem -> data = item;
	newItem -> next = NULL;
	newItem -> prev = NULL;
	return newItem;
}
void insertInFront(Node *temp,int value){
	Node *newnode = nodeCreation(value);
	if(head == NULL){
		head = newnode;
	}else{
		newnode -> next = head;
		head -> prev = newnode;
		head = newnode;
	}
}

void printList(Node *temp){
	printf( "list :" );
	while(temp != NULL){
		printf( "   %d",temp -> data );
		temp = temp -> next;
	}
	printf( "\n------------------------\n" );
}

void insertAfter(Node *temp,int value,int position){
	Node *newNode = nodeCreation(value);
	if(head == NULL){
		head = newNode;
	}else {
		Node *temp1 = head;
		for(int i = 0;i < position-1;i++){
			temp1 = temp1 -> next;
		}
		if(temp1 -> next == NULL){
			insertEnd(head,value);
		}else{
			newNode -> next = temp1 -> next;
			newNode -> prev = temp1;
			temp1 -> next = newNode;
			newNode -> next -> prev = newNode;
		}
	}
}

void insertEnd(Node *temp,int value){
	Node *newNode = nodeCreation(value);
	Node *head1 = head;
	if(head == NULL ){
		head = newNode;
	}else{
		while(head1 -> next != NULL){
			head1 = head1 -> next; 
		}
		newNode -> prev = head1;
		head1 -> next = newNode;	
	}
}

int main(){
	
	printf( "\n----------------------- DoubleLinkedList :) --------------------------\n" );

	insertEnd(head,20); 	    printList(head);
	
    insertAfter(head,30,1); 	printList(head);
    
	insertInFront(head,10);  	printList(head);
	
	insertInFront(head,0);   	printList(head);
	
	insertEnd(head,40);	        printList(head);
	
	insertEnd(head,50);	        printList(head);
	
	insertEnd(head,70);     	printList(head);
	
	insertAfter(head,60,6);	    printList(head); 
	
	return 0;
} 