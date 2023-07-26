#include<stdio.h>
#include<string.h>
struct myStruct {
	int age;
	char name[10];
	double mark;
	char dept[20];
	int reg;				
};
void student1();
void student2 ();
void display(struct myStruct);

struct myStruct a , b;
	
int main (){
	int choice ;
	student1();
	student2();	
	printf("Enter 1 to show the details of 1st student or 2 to get student 2 details :");
	scanf("%d",&choice);		
	if(choice==1){	
		display(a);		
	}else if(choice==2){		
		display(b);
	 }else{
	 	display(a);
	 	printf("\n");
	 	display(b);
	  }		
	return 0;			
}

void student1 (){
	char name1[10];
	char dept1[20];
	printf("Enter the Name of the Student 1 :");
	scanf("%s",name1);
	
	printf("Enter the age of the student :");
	scanf("%d",&a.age);
	
	printf("Enter the mark of the student (in percentage) :");
	scanf ("%lf",&a.mark);
	
	printf("Enter the department of the student :");
	scanf("%s",dept1);
	
	printf("Enter the register number of the Student :");
	scanf("%d",&a.reg);
	
	strcpy(a.name , name1);
	strcpy(a.dept , dept1);
}

void student2 (){
	char name2[10];
	char dept2[20];
	
	printf("Enter the Name of the Student 2 :");
	scanf("%s",name2);
	
	printf("Enter the age of the student :");
	scanf("%d",&b.age);
	
	printf("Enter the mark of the student (in percentage) :");
	scanf ("%lf",&b.mark);
	
	printf("Enter the department of the student :");
	scanf("%s",dept2);
	
	printf("Enter the register number of the Student :");
	scanf("%d",&b.reg);
	
	strcpy(b.name , name2);
	strcpy(b.dept , dept2);
}

void display( struct myStruct i ){
		printf("\nThe details of the student 1 are :\n\n");	
		printf(" Name = %s\n\n",i.name);		
		printf(" Age = %d\n\n",i.age);	
		printf(" Mark = %lf\n\n",i.mark);	
		printf(" deptartment = %s\n\n",i.dept);	
		printf(" Register number = %d",i.reg);	
}