#include<stdio.h>
#include<stdlib.h>

 struct node {
	int data;
	struct node *next;
};
typedef struct node n;
void printList();

int main(){
	
	n *head;
	n *one = NULL;
	n *two = NULL;
	n *three = NULL;
	one = malloc(sizeof(struct node));
	two = malloc(sizeof(struct node));
	three = malloc(sizeof(struct node));
	
	one->data = 1;
	two->data = 2;
	three->data = 3;
	
	one->next = two;
	two->next = three;
	three->next = NULL;
	head = one;
	
	printList(head);
	
}

void printList(n *i){
	while(i != NULL){
		printf( "%d\n",i->data );
		i = i -> next;	
	}
}