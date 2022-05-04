#include<stdio.h>

int main(){
    int i =6;
    int *j = &i;

    printf("The value of i is %d\n", i);
    printf("The value of i is %d \n", *j);
    printf("The address of i is %u \n",j);
    printf("The address of j is %u\n",&j);
    printf("The value of j is %u \n",*(&j)); // value at address of j means value of j

    return 0;
}