#include<stdio.h>
#include<stdlib.h>
    
    int main(){
        //1
        FILE *file;
        char ch;
        char fileName[100] = "temp.txt";
    
        //2
        file = fopen(fileName,"r");
    
        //3
        if(file == NULL){
            printf("File not found.");
        }else{
            //4
            ch = fgetc(file);
    
            //5
            while(ch != EOF){
                printf("%c",tolower(ch));
                ch = fgetc(file);
            }
            fclose(file);
        }
    }