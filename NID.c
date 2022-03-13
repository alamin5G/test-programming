/**
 * @file NID.c
 * 15.Write a program to check are you eligible to make NID Card or not.
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
    int ageCheck;
    printf("Enter your age to assure you are eligible to make NID or not: ");
    scanf("%d", &ageCheck);
    if(ageCheck>=18){
        printf("You are eligible to make NID.");
    }else{
        printf("You are not eligible to make NID");
    }
}


