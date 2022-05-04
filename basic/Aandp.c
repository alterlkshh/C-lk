#include<stdio.h>

int main(){
    int l,b,a,p;
    printf("enter l and b :");
    scanf("%d %d",&l,&b);
    a = l*b;
    p = 2*(l+b);
    printf("area and perimeter are %d and %d",a,p);
    return 0;
}