#include<stdio.h>
#include<unistd.h>
int main(){
    printf("I am in Exec.c\n");
    printf("PID of Exec.c is %d", getpid());
    char *args[] = {"./hello.c",NULL};
    execv(args[0],args);
    printf("\nCame back to exec.c\n");
    return 0;
}