/**
 * @file armstrongNumber.c
 * 44. Write a program to check whether a number is Armstrong number or not.
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-03-15
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h> 
void main(){
    int digit, n, rem, temp;

    printf("Enter numbers to assure it is armstrong number or not (ex: 153): ");
    scanf("%d", &n);
    temp = n;
    while(temp != 0 ){
        rem = temp%10;
        digit = digit + rem * rem * rem;
        temp = temp/10;
    }
    
    if (digit == n)
    {
       printf("%d is armstrong number.", n);
    } else{
        printf("%d is not armstrong number.", n);
    }
    
}
