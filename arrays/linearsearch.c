#include<stdio.h>

int main(){
    int arr[10],i,n,f=0;
    printf("Enter the element you want to search : ");
    scanf("%d",&n);
    printf("Enter the 10 array element \n");
    for(i=0;i<10;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<10;i++){
        if(arr[i]==n){
            f=1;
            printf("Element found at location %d",i+1);
            break;
        }
    }
    if(f=0){
        printf("Element not found");
    }
    return 0;
}