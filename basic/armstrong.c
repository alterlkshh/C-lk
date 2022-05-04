#include<stdio.h>  
int main()    
{    
int n,r,c,sum=0,temp;    
printf("Enter the value of n : ");    
scanf("%d",&n);    
temp=n;    
while(n>0)    
{    
r=n%10;    
c = r*r*r;   
sum = sum + c;
n=n/10;    
}    
if(temp==sum)    
printf("armstrong number ");    
else    
printf("not armstrong");   
return 0;  
}   