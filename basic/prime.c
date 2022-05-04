#include<stdio.h>

int main(){
    int n,prime=1;
    printf("Enter the value of n \n");
    scanf("%d",&n);
    for(int i=2;i<n;i++){
        if(n%i==0){
            prime=0;
            break;
        }
    }
    if(prime==0 && n!=2){
        printf("This is not a prime number");
    }
    else{
        printf("This is prime number");
    }
    return 0;
}