#include<stdio.h>
#include<stdlib.h>

int main()
{
    /* code */
    int p;
    p=fork();
    printf("p=%d  getpid=%d  getppid=%d\n",p,getpid(),getppid());
    return 0;
}
