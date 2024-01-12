#include<stdio.h>
#include<stdlib.h>

int tph, philName[20],howhung,hu[20];
void one();
void two();
int main(){
    int choice;
    printf("Enter number of philosophers : " );
    scanf("%d",&tph);
    for(int i =0; i<tph;i++){
        philName[i]=(i+1);
    }
    printf("Enter how many are hungry : ");
    scanf("%d",&howhung);
    if(tph == howhung){
        printf("Since all of them are hungry , Dead lock may occur ");
        printf('Exting..');
    }else{
        printf("Enter position of the philosopher : ");
        for(int i =0; i<howhung;i++){
            printf("Enter position of %d philosopher : ",(i+1));
            scanf("%d",&hu[i]);
        }
        do{
            printf("1.Allow only one process \n2.Allow two process\n3.Exit\n");
            printf("Enter your choice : ");
            scanf("%d",&choice);
            switch (choice){
                case 1:
                    one();
                    break;
                case 2:
                    two();
                    break;
                case 3:
                    exit(0);
                default:
                    printf("Enter valid Option..");
                    break;
            }
        }while(1);
    }
    return 0;
}

void one(){
    int pos = 0,x,i;
    for(int i =0; i<howhung;i++){
        printf("P %d is granted \n",philName[hu[pos]]);
        for(x = pos;x < howhung; x++){
            printf("P %d is waiting \n",philName[hu[x]]);
        }
    }
}

void two(){
    int i,j, s=0, t,r,x;
    for(i =0;i<howhung;i++){
        for(j = i+1;j < howhung;j++){
            if(abs(hu[i]-hu[j])>=1 && abs(hu[i] - hu[j])!=4){
                printf("Combination%d\n",(s+1));
                s++;
                r=hu[j];
                t=hu[i];
                printf("Process %d and %d are granted \n",philName[hu[i]],philName[hu[j]]);
                for(x=0; x<howhung;x++){
                    if(hu[x]!=t&& hu[x]!=r){
                        printf("P%d is waiting \n",philName[hu[x]]);
                    }
                }
            }
        }
    }
}