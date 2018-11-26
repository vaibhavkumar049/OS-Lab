#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc, char **argv)
{
    /* code */
    char *args[]={"Hello","All",NULL};
    printf("About to run a new program\n");
    execv("./np",args);
    printf("End of main program\n");
    return 0;
}
