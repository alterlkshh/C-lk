#include<stdio.h>

int main(){
    int arr [10];
    int *ptr = arr;
    ptr = ptr +2;
    if(ptr == &arr[2]){
        printf("These denote to same location in memory \n");
    }
    else{
        printf("These do not denote to same location in memory \n");
    }
    return 0;
}