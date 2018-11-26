#include<stdio.h>
#include<stdlib.h>
#include<signal.h>
#include<unistd.h>

void call(int s){
    printf("Signal Recievd SIGINT=%d\n",s);
    signal(SIGINT,SIG_DFL);
}

int main()
{
    signal(SIGINT,call);
    while(1){
        printf("MAin is running \n");
        sleep(1);
    }
    /* code */
    return 0;
}
