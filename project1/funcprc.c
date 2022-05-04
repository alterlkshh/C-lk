// #include<stdio.h>
// void GoodMorning();
// void GoodAfternoon();
// void GoodNight();

// int main(){
//     GoodMorning();
//     GoodAfternoon();
//     GoodNight();

//     return 0;
// }

// void GoodMorning(){
//     printf("Hello hello goodmorning \n");
// }

// void GoodAfternoon(){
//     printf("Hello everyone goodafternoon \n");
// }

// void GoodNight(){
//     printf("Hello lazies goodnight \n");
// }

// another way

#include<stdio.h>
void GoodMorning();
void GoodAfternoon();
void GoodNight();

int main(){
    GoodMorning();
    
    return 0;
}

void GoodMorning(){
    printf("Hello hello goodmorning \n");
    GoodAfternoon();
}

void GoodAfternoon(){
    printf("Hello everyone goodafternoon \n");
    GoodNight();
}

void GoodNight(){
    printf("Hello lazies goodnight \n");
}