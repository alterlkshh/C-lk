#include<stdio.h>

int main(){
    // char str[] = {'L','K','s','H','H','\0'};

    char str[] = "Lokeshh";
    char *ptr = str;
    while(*ptr!= '\0'){
    printf("%u \n",ptr);
    ptr++;
    }
    return 0;
}