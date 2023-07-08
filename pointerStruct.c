#include<stdio.h>
struct myStruct {
    int age;
    char name[50];
};
int main(){
    struct myStruct *detailsPtr,details;
    detailsPtr=&details;
    
    printf( "Enter your Age : " );
    scanf( "%d",&detailsPtr->age );

    printf( "Enter your Name :" );
    scanf( "%s",detailsPtr->name );

    printf( "Name = %s\nAge = %d\n",detailsPtr->name, detailsPtr->age );
    printf( "exited...\n" );
    return 0;
}