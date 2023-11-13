/*Numeric Methods Pracical
Written by KISHORE R*/
//EX2


#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define f(x) ((x*3)- cos(x)-1)
#define f1(x) (3+sin(x))

void main(){
    float a =-1,b=-1,c,prv =-1;
    int i;
    char ch;
    system ("cls");
    printf("Do you want to choose interval (y/n)? : ");
    scanf("%c",&ch);
    if(ch == 'y' || ch == 'Y'){
        printf("Enter value of A and B");
        scanf("%f%f",&a,&b);
    }else{
        for(i =0;a ==-1 || b == -1;i++){
            if(f(0)<0){
                if(f(i)<0)
                    a=i;
                if(f(i)>0)
                    b=i;
            }
            else{
                if(f(i)>0)
                    a=i;
                if(f(i)<0)
                    b=i;
            }
        }
        printf("\nfinding values of A and B ..... \nA = %.4f\nB = %.4f\n ",a,b);
    }
    printf("Itt\t\tRoot\n");
    c=(abs(f(a))>= abs(f(b)))?a:b;
    i =0;
    while((ceil(10000*prv)/10000)!= (ceil(10000*c)/10000)){
        prv = c;
        c= (c-(f(c)/f1(c)));
        printf("%d\t\t%.4f\n",i,c);
        i++;

    }
    printf("\nThe Approximate Root is %.4f\n",c);
}

