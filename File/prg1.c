#include<stdio.h>

int main(){
    int a,b,c;
    FILE *ptr;
    ptr = fopen("pr1.txt","r");
    fscanf(ptr,"%d %d %d ",&a,&b,&c);
    printf("The values of a,b,c are %d %d %d ",a,b,c);
    return 0;
}