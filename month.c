/**
 * @file month.c
 * 22.Write a program to input month number and print that month name and number of days in that month.
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
    int monthNo;
    printf("Enter a month no. to show that month name: ");
    scanf("%d", &monthNo);
    if (monthNo>=1 && monthNo<=12)
    {
        switch (monthNo)
        {
        case 1:
            printf("Janauary\n31 Days");
            break;
        case 2:
            printf("February\n28 Days");
            break;
        case 3:
            printf("March\n31 Days");
            break;
        case 4:
            printf("April\n30 Days");
            break;
        case 5:
            printf("May\n31 Days");
            break;
        case 6:
            printf("June\n30 Days");
            break;
        case 7:
            printf("July\n31 Days");
            break;
        case 8:
            printf("August\n31 Days");
            break;
        case 9:
            printf("September\n30 Days");
            break;
        case 10:
            printf("October\n31 Days");
            break;
        case 11:
            printf("November\n30 Days");
            break;
        
        default:
            printf("December\n31 Days");
            break;
        }
    }else{
        printf("%d is out of range of month NO.", monthNo);
    }
    
}
