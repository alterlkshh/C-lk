#include<stdio.h>

int main(){
    FILE *fptr;
    int num = 45;
    fptr = fopen("gen.txt","w");
    fprintf(fptr, "The number is %d", num);
    fclose(fptr);
    return 0;
}