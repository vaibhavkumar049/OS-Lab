#include<stdio.h>
#include<stdlib.h>
#include <unistd.h>
int main(){
    pid_t pid;
    pid=fork();
    fork();
    fork();
    fork();
    printf("hello\n");
}