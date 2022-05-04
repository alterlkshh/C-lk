#include<stdio.h>

int main(){
    int c = 54;
    int *ptr;
    ptr = &c;
    printf("The address of variable c is %u \n",ptr);
    printf("The value of variable c is %d \n",*ptr);
    return 0;
}