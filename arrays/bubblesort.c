#include<stdio.h>

void bubble(int a[],int n){
    int i,j,t;
    for(i=0;i<=n;i++){
        for(j=0;j<=i;j++){
            if(a[j]>a[j+1]){
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
    printf("final sorted array is : ");
    for(i=0;i<n;i++){
        printf("%d",a[i]);
    }
}


int main(){
    int b[10],n,i;
    printf("Enter the number of elements to be sorted : ");
    scanf("%d",&n);
    printf("Enter %d array element : ",n);
    for(i=0;i<n;i++){
        scanf("%d",&b[i]);
    }
    bubble(b,n);
    return 0;
}