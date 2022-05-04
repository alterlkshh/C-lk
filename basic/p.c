#include<stdio.h>

int main(){
    int i = 100;
    int *p;
    p=&i;

    printf("%d \n",i);
    printf("%u \n",p); 
    printf("%u \n",&p); 
    printf("%d \n",*p);
    printf("%u \n",&p);
    

    return 0;
}