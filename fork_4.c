#include<stdio.h>
#include<string.h>
#include<sys/types.h>

#define MAX_COUNT 200
int main(){
    int p;
    p=fork();
    if(p==0){
        sleep(10);
        printf("In CHILD process\n");
        printf("getpid = %d\n",getpid());
        printf("getppid = %d\n",getppid());
        system("ps -af");
    }
    else if (p>0){
        system("ps -af");
        printf("In PARENT process\n");
        printf("getpid = %d\n",getpid());
        printf("getppid = %d\n",getppid());
        
    }
    else{
        printf("Error in Child creation\n");
    }
}

