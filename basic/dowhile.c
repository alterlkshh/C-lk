#include<stdio.h>

int main(){
    // int i = 1;
    // do{
    //     printf("%d\n",i);
    //     i++;
    // }
    // while(i<=10);

    int i = 0;
    int n;
    printf("Enter the value of n \n");
    scanf("%d",&n);
    do{
        printf("%d\n",i+1);
        i++;

    }while(i<=n);
    return 0;
}