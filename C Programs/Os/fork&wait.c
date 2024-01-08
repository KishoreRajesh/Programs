#include <stdio.h>
#include <stdlib.h> 
#include <sys/types.h>
#include <unistd.h>

int main() {
    pid_t pid;
    int status;
    pid = fork();
    if (pid == 0) {
        printf("I am child\n");
        exit(0);
    } else {
        wait(&status);
        printf("I am Parent\n");
        printf("Child Returned %d\n", status);
    }
    return 0;
}
