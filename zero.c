/**
 * @file zero.c
 * 16.Write a program to check whether a number is negative, positive or zero.
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
    int number;
    printf("Enter a number to check whether it is negative, positive or zeor: ");
    scanf("%d", &number);
    if(number>0){
        printf("%d number is positive number.",number);
    }else if(number==0){
        printf("%d number is zero", number);
    }else{
        printf("%d number is negative", number);
    }
}
