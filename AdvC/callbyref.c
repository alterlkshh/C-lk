#include<stdio.h>
void wrongswap(int a, int b);
void swap(int *a, int *b);

int main(){
    int x=4, y=3;
    printf("The value of x and y before swap is %d and %d \n ",x,y);
    wrongswap(x,y);
    swap(&x,&y); // since the addresses are passed to the function the function can now modify the value of a variable in calling function using * and & operators
    printf("The value of x and y after swap is %d and %d \n",x,y);

    return 0;
}

void wrongswap(int a, int b){
    int temp;
    temp = a;
    a = b;
    b = temp;
}

 void swap(int *a, int *b){  // stores the address of variable  a&b has address of x & y
     int temp;
    temp = *a;  // denotes value at the address of a
    *a = *b;
    *b = temp;
 }
