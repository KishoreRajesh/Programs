#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<sys/fcntl.h>
#include<unistd.h>
#include<dirent.h>
int main(){
    char name[23];
    struct dirent *entry;
    DIR *fd;
    getcwd(name,23);
    printf("My Current directory is %s",name);
    fd=opendir(name);
    entry=readdir(fd);
    while(entry!=NULL){
        printf("\ninode Number :%ld inode Name : %ld",entry->d_ino,entry->d_name);
    entry = readdir(fd);
    }
    closedir(fd);
    return 0;
}