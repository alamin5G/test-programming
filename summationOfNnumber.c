/**
 * @file summationOfNnumber.c
 * In this program, will calculate the program from 1 to 100 without for loop
 * and also calculate n to n size number, which difference is 1. ex: 50 to 105.
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-03-25
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <stdio.h>
void main(){

    int firstNumber, nNumber, sum = 0, temp;
    printf("Enter 1st and last number: ");
    scanf("%d%d", &firstNumber, &nNumber);

    //1 to n number summation without loop;
    sum = (nNumber*(nNumber+1))/2;
    printf("1 to %d total sum is = %d", nNumber, sum);
    
  
    temp = (firstNumber*(firstNumber-1))/2;
    sum = sum - temp;
    printf("\n%d to %d s total sum is = %d", firstNumber, nNumber, sum);
}