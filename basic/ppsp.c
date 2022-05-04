#include<stdio.h>

int main(){
    int x = 300;
    unsigned char *p;
    p = &x;
    printf("%d %d %d %d\n",*p,*(p+1),*(p+2),*(p+3));
    return 0;
}