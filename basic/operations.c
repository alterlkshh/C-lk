// #include<stdio.h>

// int main(){
//     int x=10, y=20, z;
//     z=x++ + ++y + y++ ;
//     printf("%d",z);
//     return 0;
// }

// #include<stdio.h>

//     int main(){
//     int x=10, y=20, z;
//     z=x++ * --y ;
//     printf("%d %d %d",x,y,z);
//     return 0;
// }

#include<stdio.h>

int main(){
    int x = 10;
    x = x++ + ++x ;
    printf("%d",x);
    return 0;
}
