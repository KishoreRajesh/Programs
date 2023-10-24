#include<stdio.h>
#include<string.h>

#define MAX_STUDENTS 100

char studentNames[MAX_STUDENTS][50];
int studentAges[MAX_STUDENTS];
char studentMajors[MAX_STUDENTS][50];

int binarySearch(char name[], int left, int right){
    while (left <= right){
        int mid = left + (right - left)/2;
        int cmp = strcmp(studentNames[mid],name);
        if(cmp == 0)
            return mid;
        else if (cmp <0)
            left = mid +1;
        else 
            right = mid-1;
    }
    return -1;
}

int main(){
    int numstudents =3;
    strcpy(studentNames[0], "Alice");
    studentAges[0] = 20;
    strcpy(studentMajors[0], "Math");

    strcpy(studentNames[1], "Bob");
    studentAges[1] = 21;
    strcpy(studentMajors[1], "History");

    strcpy(studentNames[2], "Charlie");
    studentAges[2] = 19;
    strcpy(studentMajors[2], "Science");

    char targetName[] = "Bob";
    int foundIndex = binarySearch(targetName,0,numstudents-1);

    if(foundIndex!= -1){
        printf("Student Found :\n");
        printf("Name : %s\n",studentNames[foundIndex]);
        printf("Age : %d\n",studentAges[foundIndex]);
        printf("Major : %s\n",studentMajors[foundIndex]);
    }else{
        printf("Student not found\n");
    }
    return 0;
}