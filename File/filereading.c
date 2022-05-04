#include<stdio.h>

int main(){
    FILE *ptr;
    int num;
    ptr = fopen("lkshh.txt","r");
    fscanf(ptr, "%d",&num);
    fclose(ptr);
    printf("The value of sum is %d",num);
    
    return 0;
}