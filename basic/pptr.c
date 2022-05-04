#include<stdio.h>

int main(){
    int a=5,b=7;
    float f = 2.5;
    int *p,*q;
    char *ptr;
    float *n;
    p = &a;
    q=&b;
    n=&a;
    ptr=&b;
    printf("a=%d b=%d\n",a,b);
    printf("address of a=%x \n address of b=%x\n",p,q);
    printf("p=%x\n q=%x\n",p,q);
    printf("n=%x ptr=%x\n",n,ptr);
    printf("*n=%d\n *ptr=%d\n",*n,*ptr);
    

    return 0;
}