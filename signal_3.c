#include<stdio.h>
#include<signal.h>
#include<stdlib.h>
void call(int s){
    printf("Signal recieved SIGGINT= %d",s);
    signal(SIGFPE,SIG_DFL);
    exit(0);
}

int main(){
    int n;
    signal(SIGALRM,call);
    printf("Enter a number\n");
    alarm(3);
    scanf("%d",&n);
    return 0;
}