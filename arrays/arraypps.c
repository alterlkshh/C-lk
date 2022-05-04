#include<stdio.h>

int main(){
    int arr[5]={2,5,6,8,9};

    char *p;
    p=arr;
    printf("%d \n %d \n %d \n %d \n %d \n",*p,*(p+1),*(p+2),*(p+3),*(p+4),*(p+5));
    return 0;
}