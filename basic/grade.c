#include<stdio.h>

int main(){
    int phy,chem,math,eng,pps,sum;

    printf("Enter physics marks: ");
    scanf("%d",&phy);

    printf("Enter chemistry marks: ");
    scanf("%d",&chem);

    printf("Enter maths marks: ");
    scanf("%d",&math);

    printf("Enter english marks: ");
    scanf("%d",&eng);

    printf("Enter pps marks: ");
    scanf("%d",&pps);

    sum = phy+chem+math+eng+pps;
    float per;
    per = (sum)/5;
    printf("Your percentage is %f \n",per);

    if(per>=90){
        printf("grade A");
    }
    else{
        if(per >= 80 && per <= 89){
            printf("grade B");

        }
        else{
            if(per >= 70 && per <= 79){
                printf("grade C");

            }
            else{
                if(per >= 60 && per <= 69){
                    printf("grade D");

                }else{
                    printf("You are failed");
                }
            }
        }
    }

    
    return 0;
}