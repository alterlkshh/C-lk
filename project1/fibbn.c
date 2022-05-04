#include<stdio.h>
int fib(int );

int main(){
    int a=8 ;
    // printf("Enter the number of elements \n");
    // scanf("%d",a);
    // printf("THe fibonacci series is : \n");
    for(int i =0;i<a;i++){
        printf(" %d ",fib(i));
    }

    return 0;
}

int fib(int i){
    if(i==0){
        return 1;
    }
    else if(i==1){
        return 1;
    }
    else{
        return  (fib(i-1) + fib(i-2));
    }
    
}