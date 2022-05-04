#include<stdio.h>
void printArray(int ptr[], int n){
    for(int i = 0; i<n; i++){
        printf("The value of element %d is %d \n",i+1,ptr[i]);
    }
}
int main(){
    int arr [] = {4, 6, 78, 32, 69, 58, 31};
    printArray(arr,7);
    
    return 0;
}