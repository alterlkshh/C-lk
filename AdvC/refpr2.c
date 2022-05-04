#include<stdio.h>
void printadd(int a){ // the value came here of x ie 7 will be a copy from main function so the corresponding address will be different 
    printf("The address of variable a using function is %u \n",&a);
}

int main(){
    int x = 7;
    printf("The value of variable x is %d \n",x);
    printadd(x);
    printf("The address of variable x without using function is %u \n",&x);
    
    return 0;
}