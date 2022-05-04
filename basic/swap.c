#include<stdio.h>

int main(){
    int a,b,c;
    a=5;
    b=10;
    c=b;
    b=a;
    a=c;
    printf("a=%d , b=%d",a,b);
    return 0;
}