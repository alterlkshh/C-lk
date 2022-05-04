#include<stdio.h>

void cyclicSwap(int *a,int *b,int *c);

int main(){
    int a,b,c;
    printf("Enter a,b,c respectively \n");
    scanf("%d %d %d",&a,&b,&c);
    printf("Value before swapping \n");
    printf("a=%d,b=%d,c=%d \n",a,b,c);
    cyclicSwap(&a,&b,&c);
    printf("value after swapping : \n");
    printf("a=%d,b=%d,c=%d",a,b,c);
    return 0;
}

void cyclicSwap(int *n1,int *n2,int *n3){
    int temp;
    // swapping in cyclic order
    temp = *n2;
    *n2=*n1;
    *n1=*n3;
    *n3=temp;
}