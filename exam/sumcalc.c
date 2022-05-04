// RTU 2019 solution --> to find sum

#include<stdio.h>
#include<math.h>


    int fact(int n){
        if(n==0 || n==1){
            return 1;
        }
        else{
            return n*fact(n-1);
        }
    }

    int main(){

    float x,sum,nterm;
    int i,n;
    printf("Input the value of x : ");
    scanf("%f",&x);
    printf("Input number of terms : ");
    scanf("%d",&n);
    sum = 1;
    nterm = 1;
    for(i=1;i<=n;i++){
        nterm = pow(x,i)/fact(i);
        sum = sum  + nterm;
    }

    printf("The sum is : %f \n",sum);

    return 0;
}