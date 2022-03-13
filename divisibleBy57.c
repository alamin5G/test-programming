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

     //individual can divisible 
     
     if(aNumber%5 == 0){
         printf("%d is divisible by 5\n", aNumber);
     }

     if (aNumber%7 == 0){
        printf("%d is divisible by 7", aNumber);
     }

     //or second condition is 5 and 7 both can divided each others at the same time

     if((aNumber%5 == 0) &&(aNumber%7 == 0)){
         printf("\n\n%d is divisible by both 5 and 7.");
     }else {
         printf("\n\n%d is not divisible by both 5 and 7");
     }
}