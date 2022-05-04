#include<stdio.h>

struct time_struct{
    int hour;
    int minute;
    int second;
};

int main(){
    struct time_struct time;
    time.hour = 16;
    time.minute = 45;
    time.second = 25;

    printf("%d:%d:%d",time.hour,time.minute,time.second);
    return 0;
}