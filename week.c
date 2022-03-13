/**
 * @file week.c
 * 21.Write a program to input week number and print weekday.
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-03-13
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h> 
void main(){
     int weekDayNo; 
     printf("Enter week day NO. to see the week day: ");
     scanf("%d", &weekDayNo);
     if (weekDayNo>=1 && weekDayNo<=7)
     {
         switch (weekDayNo)
         {
         case 1:
            printf("Saturday");
             break;
         case 2:
            printf("Sunday");
             break;
         case 3:
            printf("Monday");
             break;
         case 4:
            printf("Tuesday");
             break;
         case 5:
            printf("Wednesday");
             break;
         case 6:
            printf("Thursday");
             break;
         default:
            printf("Friday");
             break;
         }
     }else{
         printf("%d is out of range of week days",weekDayNo);
     }
     

}
