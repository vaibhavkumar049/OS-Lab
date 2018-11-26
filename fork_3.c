#include<stdio.h>
#include<string.h>
#include<sys/types.h>

#define MAX_COUNT 200
void childProcess();
void parentProcess();
void main(){
    pid_t pid;
    pid=fork();
    if(pid==0){
        childProcess();
    }
    else{
        parentProcess();
    }
}

void childProcess(){
    int i;
    for(i=0;i<MAX_COUNT;i++){
        printf("this line is from CHILD process value %d\n",i);
    }
    printf("CHILD process done\n");
}

void parentProcess(){
    int i;
    for(i=0;i<MAX_COUNT;i++){
        printf("this line is from PARENT process value %d\n",i);
    }
    printf("PARENT process done\n");
}