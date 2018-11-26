#include<pthread.h>
#include<stdio.h>
#include<stdlib.h>

void *even(void *ptr){
    int *p=(int*)ptr;
    int i;
    printf("Thread Even ID %u\n",(unsigned int)pthread_self());
    for(i=p[0];i<=p[1];i++){
        if(i%2==0)
        printf("%d ",i);
    }
    printf("\n");
    pthread_exit(NULL);
    return NULL;
}

void *odd(void *ptr){
    int *p=(int*)ptr;
    int i;
    printf("Thread ODD ID %u\n",(unsigned int)pthread_self());
    for(i=p[0];i<=p[1];i++){
        if(i%2!=0)
        printf("%d ",i);
    }
    printf("\n");
    pthread_exit(NULL);
    return NULL;

}

void main()
{
    pthread_t thread1,thread2;
    int arr[2],i;
    printf("Enter the range\n");
    scanf("%d %d",&arr[0],&arr[0]);
    pthread_create(&thread1,NULL,even,arr);
    pthread_join(thread1,NULL);
     pthread_create(&thread2,NULL,odd,arr);
    pthread_join(thread2,NULL);
    /* code */
    return 0;
}
