#include<stdio.h>

void microkernel_sendmsg(char *);

void main(){
    printf("HelloWorld!\n");
    microkernel_sendmsg("is more protable");
}

void microkernel_sendmsg(char *a){
    printf("microkernel:%s\n",a);
}
