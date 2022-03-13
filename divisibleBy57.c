/**
 * @file divisibleBy57.c
 * 13.Write a program to check whether a number is divisible by 5 and 7 or not
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
     int aNumber; 
     printf("Enter a number to check it is divisible by 5 or 7 : ");
     scanf("%d", &aNumber);
     
     if(aNumber%5 == 0){
         printf("%d is divisible by 5\n", aNumber);
     }

     if (aNumber%7 == 0){
        printf("%d is divisible by 7", aNumber);
     }
}