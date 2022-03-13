/**
 * @file reverseNumber.c
 * 28. Write a Program to reverse a given number using while loop.
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-03-14
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h> 
void main(){
    int n, reverse =0, remain, temp;
    printf("Enter an number ex: 2566 : ");
    scanf("%d", &n);

    temp = n;
    while (temp!=0)
    {
        remain = temp%10;
        reverse = reverse * 10 + remain;
        temp = temp/10;
    }

    printf("%d's reverse is = %d ", n, reverse);
    
}
