/**
 * @file leapYear.c
 * 17.Write a program to check whether a year is leap year or not.
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-03-13
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h> 
void main()
{
    int year;
    printf("Enter a year to assure it leap year or not: ");
    scanf("%d",&year);
    if((year%4 == 0) && (year%100 != 0)){
        printf("%d is leap year.\n");
    }else if (year%400 == 0)
    {
        printf("%d is leap year.\n");
    }else{
        printf("%d is not leap year.\n");
    }
    
    }
