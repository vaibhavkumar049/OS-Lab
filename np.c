#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc, char **argv)
{
    /* code */
    int i;
    for(i=0;i<argc;i++){
        printf("%s\n",argv[i]);
    }
    return 0;
}
