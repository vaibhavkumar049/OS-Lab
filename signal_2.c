#include<stdio.h>
#include<signal.h>

void call(int s){
    printf("Signal recieved SIGGINT= %d",s);
    signal(SIGFPE,SIG_DFL);
}

int main(){
    int a,b,c;
    signal(SIGFPE,call);
    scanf("%d %d",&a,&b);
    c=a/b;
    return 0;
}