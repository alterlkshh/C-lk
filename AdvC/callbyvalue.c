#include<stdio.h>
int sum (int a, int b);
int main(){
    int a=4, b=7;
    printf("The value of 4+7 is %d \n",sum(a,b));

    return 0;
}

int sum (int a, int b){
    int c;
    c=a+b;
    b=54035;  //  in call by value one can't change variables of main function through anothe function
    a=8998;
    return c;
}