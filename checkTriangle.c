/**
 * @file checkTriangle.c
 * 23.Write a program to check whether triangle is valid or not.
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-03-13
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>
void main() {
    int a, b, c, sumOfAngle;
    printf("Enter a, b and c angle to check the triangle is valid or not: ");
    scanf("%d %d %d", &a, &b, &c);
    sumOfAngle = a + b + c;

    if((sumOfAngle == 180) && a>0 && b>0 && c>0){
        printf("Triangle is valid.");
    }else{
        printf("Triangle is not valid");
    }
}
