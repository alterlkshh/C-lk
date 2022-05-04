#include<stdio.h>

int main(){
    int i,n,y,sum=0;
    printf("enter number =  ");
    scanf("%d",&n);
    for(i=1;i<=10;i++){
        y=n*i;
        sum +=y;
        
    }
    printf("%d",sum);
    return 0;
}
