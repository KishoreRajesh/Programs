/*Numeric Methods Pracical
Written by KISHORE R*/
//EX1


#include <stdio.h>
#include <math.h>
#include<stdlib.h>

#define f(x) ((x*x*x) - (4*x)- 1)
// #define f(x) ((x*x*x) - (x) -1)
// #define f(x) ((x) - (cos(x)))
// #define f(x) ((x*sin(x))-1)
// #define f(x) ((exp(x)) - (3*x))
// #define f(x) ((x*x*x) - (9*x)+1)

void main(){
    float a = -1, b = -1,c, prv = -1;
    int i;
    char ch;
    system("cls");

    printf("Do you want to choose interval (y/n)? : ");
    scanf("%c",&ch);

    if(ch == 'y' || ch == 'Y'){
        printf("Enter value of A and B\n");
        scanf("%f%f",&a,&b);
    }else{
        for(i =0;a == -1 || b == -1;i++){
            if(f(0)<0){
                if(f(i) >0){
                    b=i;
                }
                if(f(i) <0){
                    a=i;
                }
            }else{
                if(f(i)>0){
                    a=i;
                }
                if(f(i)<0){
                    b=i;
                }
            }
        }
        printf("\nFinding values of A and B....\nA = %.f\nB= %.f\n",a,b);
    }
    printf("A\t\tB\t\tRoot\n");

    while((ceil(10000*prv)/10000) != (ceil(10000*c)/10000)){
        prv = c;
        c = ((a+b)/2);
        printf("%.4lf\t\t%.4f\t\t%.4f\n",a,b,c);
        if(f(a)>f(b)){
            if(f(c)>0)
                a=i;
            if(f(c)<0)
                b=i;
        }else{
            if(f(c)>0)
                b=c;
            else
                a=c;
        }
    }
    printf("\nThe Approximate Root is %.4f",c);
}