#include<stdio.h>
#include<stdlib.h>

struct node {
	float value;
	struct node *next;
};
typedef struct node Node;

Node *head;
Node *one = NULL;
Node *two = NULL;
Node *three = NULL;

void deletionInFront();
void deletionInMiddle();
void deletionInEnd();
void insertionInFront();
void insertionInMiddle();
void insertionInEnd();
void traversal();
void printList();

int main(){

	one = malloc(sizeof(struct node));
	two = malloc(sizeof(struct node));
	three = malloc(sizeof(struct node));

	one->value = 1.0;
	two->value = 2.0;
	three->value =3.0;
	
	one->next =two;
	two->next =three;
	three->next =NULL;
	head = one;
	printf( "Displaying base elements ..\n" );
	printList(head);
	printf( "\nDisplaying traversal operation ...\n" );
	traversal( head);
	printf( "\nDisplaying insertionInFront operation ...\n" );
	insertionInFront();
	printf( "\nDisplaying insertionInMiddle operation ...\n" );
	insertionInMiddle();
	printf( "\nDisplaying insertionInEnd operation ...\n" );
	insertionInEnd();
	printf( "\nDisplaying deletionInFront operation ...\n" );
	deletionInFront();
	printf( "\nDisplaying deletionInMiddle operation ...\n" );
	deletionInMiddle();
	printf( "\nDisplaying deletionInEnd operation ...\n" );
	deletionInEnd();
	
	
	return 0;
}

void insertionInFront(){
	Node *newnode = NULL;
	newnode = malloc(sizeof(Node));
	newnode->value = 0.0;
	newnode->next = head;
	head = newnode;
	printf( "The values in this operation :\n" );
	printList(head);
	
}

void insertionInMiddle(){
	int position;
	Node *newnode1 = NULL;
	newnode1 = malloc(sizeof(Node));
	newnode1->value = 2.5;
	newnode1->next= NULL;
	Node *temp = head;
	printf( "Enter the position you want to insert :\n" );
	scanf( "%d",&position );
	
	for(int i =0;i<position;i++){
		if(temp->next != NULL){
			temp = temp->next;
		}else if(temp->next = NULL){
			printf( "ERROR.....\n" );
		}
	}
	newnode1->next = temp->next;
	temp->next = newnode1;
	printList(head);
}

void insertionInEnd(){
	Node *newnode2 = NULL;
	newnode2 = malloc(sizeof(Node));
	newnode2->value = 4.0;
	newnode2->next = NULL;
	Node *temp = head;
	while(temp->next != NULL){
		temp = temp->next;
	}
	temp->next=newnode2;
	printList(head);	
}

void deletionInFront(){
	head = head->next;
	printList(head);
}

void deletionInMiddle(){
	int positionDel;
	printf( "Enter the position you want to delete: \n" );
	scanf( "%d",&positionDel );
	Node *temp = head;
	for(int i =0;i<positionDel;i++){
		if(temp->next != NULL){
			temp = temp->next;
		}
	}
	temp->next = temp->next->next;
	printList(head);
}

void deletionInEnd(){
	Node *temp = head;
	while(temp->next->next != NULL){
		temp = temp->next;
	}
	temp->next = NULL;
	printList(head);	
}

void traversal(Node *i){
	while(i != NULL){
		printf( " %.2f",i->value );
		i =i->next;
	}	
}
void printList(Node *j){
	while(j != NULL){
		printf( " %.2f",j->value );
		j= j->next;	
	}
}
