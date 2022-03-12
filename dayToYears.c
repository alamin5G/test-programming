/**
 * @file dayToYears.c
 * 8. Write a program to convert specified days into years, weeks, and days.
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-03-13
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>
int main(){
    int day, days, month, year;
    printf("Enter day to convert year, month and day: ");
    scanf("%d", &day);
    year = day/365;
    month = (day%365)/30;
    days = day - (year*365 + month*30);

    printf("%d days = %d year(s) %d month(s) %d day(s)",day, year, month, days);

    return 0;
}
