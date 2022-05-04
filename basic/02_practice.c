#include<stdio.h>

int main(){
    int p,c,m;
    float total;
    printf("Enter your physics marks \n");
    scanf("%d", &p);

    printf("Enter your chemistry marks \n");
    scanf("%d", &c);

    printf("Enter your maths marks \n");
    scanf("%d", &m);

    total = (p + c + m)/3;
    if((total<40) || p<33 || c<33 || m<33){
        printf("Your total percentage is %f and you are fail \n", total);
    }
    else{
        printf("Your total percentage is %f and you are pass \n", total);
    }
    return 0;
}