/**
 * @file calculateBy2input.c
 * 4. Write a program to perform addition, subtraction, multiplication, and division of two numbers.
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-03-12
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <stdio.h>

void main(){
    float a, b;

    printf("Enter a and b value for calculation: ");
    scanf("%f %f", &a, &b);
    printf("%.2f + %.2f = %.2f\n", a, b, a+b); //a+b is total sum;
    printf("%.2f - %.2f = %.2f\n", a, b, a-b);
    printf("%.2f * %.2f = %.2f\n", a, b, a*b);
    printf("%.2f / %.2f = %.2f", a, b, a/b);
}