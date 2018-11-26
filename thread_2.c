#include<pthread.h>
#include<stdio.h>
#include<stdlib.h>

void *func(void *ptr){
    printf("NEw Thread : Messagr recieved\n");
    char *msg=(char*)ptr;
    printf("Message %s\n",msg);
    printf("Thread id = %u\n",(unsigned int)pthread_self());
    pthread_exit(NULL);
}  
int main()
{
    pthread_t tid;
    printf("Main thread message passed\n");
    printf("Thread id = %u\n",(unsigned int)pthread_self());
    char *msg="Hello world";
    pthread_create(&tid,NULL,&func,msg);
    pthread_join(tid,NULL);

    return 0;
}


                   