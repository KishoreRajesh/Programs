#include<stdio.h>
#include<stdlib.h>

static int full, mutex, empty;
int buffer[5],in=0,out=0;
void waiting(int *a);
void signaling(int *b);

void producer(){
    int nextp;
    printf("Producer..\n");
    waiting(&empty);
    waiting(&mutex);
    nextp = rand()%10+1;
    buffer[in] = nextp;
    printf("Items produced %d\n",nextp);
    in = (in+1)%5;
    signaling(&full);
    signaling(&mutex);
    printf("Full = %d\tEmpty = %d",full, empty);
}

void consumer(){
    int nextc;
    printf("Consumer..\n");
    waiting(&full);
    waiting(&mutex);
    buffer[out] = nextc;
    printf("Consumed items %d\n",nextc);
    out = (out+1)%5;
    signaling(&empty);
    signaling(&mutex);
    printf("Full = %d\tEmpty = %d",full, empty);
}

void waiting(int *a){
    while(*a<= 0){
        *a = *a -1;
    }
}
void signaling(int *b){
    *b = *b +1;
}

int main(){
    int choice;
    mutex =1;
    full = 0;
    empty =5;
    while(1){
        printf("\n1.Producer\n2.Consumer\n3.Both\n4.Exit\n");
        printf("Enter your choice : ");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                if(empty ==0){
                    printf("Producer has to wait..\n");
                }else{
                    producer();
                }
                break;
            case 2:
                if(full == 0){
                    printf("Consumer has to wait..\n");
                }else{
                    consumer();
                }
                break;
            case 3:
                if(!empty){
                    printf("Producer has to wait..\n");
                    consumer();
                }else if(!full){
                    printf("Consumer has to wait ..\n");
                    producer();
                }else{
                    producer();
                    consumer();
                }
                break;
            case 4:
                exit(0);
            default :
                printf("Enter Valid Option..\n");
        }
    }
    return 0;
}