/**
 * @file minToHour.c
 * 6. Write a Program that takes minutes as input and display the total number of hours and minutes.
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-03-12
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>

int main(){

    int min, hour, remainMinutes;
    printf("Enter your total seconds: ");
    scanf("%d",&min);
    hour = min/60;
    remainMinutes = min%60;
    printf("%d minutes is equal %d hour and %d minutes.",min, hour, remainMinutes);


    return 0;
}
