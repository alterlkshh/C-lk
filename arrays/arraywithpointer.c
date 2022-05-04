#include<stdio.h>

int main(){
    // int marks[4] = {2,56,8,6};
    // int *ptr;
    // ptr =  &marks[0];
    
    // for(int i = 0; i<4; i++){
        
    //     printf("marks of student %d is %d \n",i+1, *ptr);
    //      ptr++;
    // }

    int marks[4];
    int *ptr;
    ptr = &marks[0];   // or simply marks
    for(int i = 0; i<4; i++){
        printf("Enter marks %d : ", i+1);
        scanf("%d",ptr);  
        ptr++;
    }

    for(int i = 0; i<4; i++){
        printf("marks of student %d are %d \n", i+1, marks[i]);

    }
    return 0;
   
}
