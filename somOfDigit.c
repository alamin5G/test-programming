/**
 * @file somOfDigit.c
 * 40. Write a program that compute the sum of the digit of a given integer number.
 * 123 = 6;
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
    int digit, remain, temp, sum = 0;
    printf("Enter integer numbers (ex: 5493) : ");
    scanf("%d", &digit);

    temp = digit;
    
    while(temp != 0){
        remain = temp%10;
        sum = sum + remain;
        temp = temp/10;
    }

    printf("%d\'s total sum is = %d ", digit, sum);
}
