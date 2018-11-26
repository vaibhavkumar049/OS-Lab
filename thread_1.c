#include<pthread.h>
#include<stdio.h>
#include<stdlib.h>

void *source(void *u){
    printf("New thread\n");
}

void main()
{
    pthread_t tid;
    pthread_create(&tid,NULL,&source,NULL);
    printf("MAin Thread\n");
    pthread_join(tid,NULL);
    /* code */
    // return 0;
}
