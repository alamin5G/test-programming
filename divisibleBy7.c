/**
 * @file divisibleBy7.c
 * 26.Write a program to find the number and sum of all integers greater than 100 and less than 200 that are divisible by 7
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
    int i, sum=0;
    for(i=101; i<200; i++){
        if(i%7==0){
            printf("%d is divisible by 7\n", i);
            sum = sum + i;
        }
    }

    printf("7 divisible sum is : %d", sum);
}
