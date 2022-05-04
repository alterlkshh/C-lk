#include<stdio.h>

int main(){
    int a,b,c,d;
    printf("enter the numbers a,b,c,d \n");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    if(a>=b && a>=c && a>d )
        printf("the greatest no. is %d ",a);

    if(b>=a && b>=c && b>d)
        printf("the greatest no. is %d ",b);

    if(c>=b && c>=a && c>d)
        printf("the greatest no. is %d ",c);

    if(d>=a && d>=b && d>c)
        printf("the greatest no. is %d ",d);

    return 0;
}