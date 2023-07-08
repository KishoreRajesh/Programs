#include<stdio.h>
#include<stdlib.h>
int n, i, *ptr, sum;
int main(){
printf( "Enter the no of elements :" );
scanf( "%d",&n );

ptr=(int*)malloc(100*sizeof(int));

for(i=0;i<n;i++){
    printf( "Enter no %d element :",i+1);
    scanf( "%d",ptr+i );
}
printf("Displaying values............");
for(i=0;i<n;i++){
    printf( "\n%d\n",*(ptr+i) );
}
return 0;
}
