#include<stdio.h>

int main(){
     int arr[10];

    for(int i=0;i<10;i++){
        printf("enter marks : ");
        scanf("%d",&arr[i]);
    }
    int sum=0;
    for(int i=0;i<10;i++){
        sum = sum + arr[i];
    }
    printf("sum = %d \n",sum);

    int avg;
    avg = sum/10;
    printf("average = %d ",avg);

    return 0;
}