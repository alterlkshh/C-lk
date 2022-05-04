#include<stdio.h>
void change(int *a){
    *a = *a * 10;

 }

int main(){
     int x = 4;
    printf("The value of x is %d \n",x);
    change(&x);
    printf("The value of x is %d \n",x);
    
    return 0;
}