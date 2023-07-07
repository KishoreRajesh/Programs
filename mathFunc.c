//#include<stdio.h>
//#include<math.h>
//int main(){
//float num ;
//float answer ;
//
//printf("Enter a Number :");
//scanf ("%f",&num);
//answer = floor(num);
//printf("the rounded value of the number is %f",answer);
//return 0;
//}
#include<stdio.h>
int floorEx (float k);

int main(){
	float number;
	printf("Enter a float number :\n");
	scanf("%f",&number);
	//floorEx(number);
	int answer = floorEx(number);
	printf("The answer of your number is :%d",answer);
	return 0;
	}
int floorEx(float k){
	//k = (int)(k);
	return (int)++k;
}

