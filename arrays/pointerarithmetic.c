#include<stdio.h>

int main(){
    int i = 5;
    int *ptr = &i;
    printf("The value of ptr is %u \n",ptr);
    printf("The value stored in ptr is %d \n",*ptr);
    *ptr++;
    printf("The value of ptr is %u \n",ptr);
    printf("The value stored in ptr is %d \n",*ptr);

    return 0;
}