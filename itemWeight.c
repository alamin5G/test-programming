/**
 * @file itemWeight.c
 * 9. Write a program that accepts only 2 item’s unit(piece) (integer values) and number of weight(kg) (can be non integer values) and calculate the average weight of each unit(pieces).
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-03-13
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <stdio.h> 
int main(){ 

    int i = 0, item=0, itemTotal =0 ;
    float itemWeight=0.0, sum = 0;

    while (++i<3)
    {
        printf("Enter item-%d unit(pieces): ", i);
        scanf("%d", &item);
        printf("Enter item-%d weight(kg): ",i);
        scanf("%f", &itemWeight);
         sum = sum + item*itemWeight;
         itemTotal = itemTotal+item;
         item = 0; itemWeight = 0;
    }

    printf("each package avg weight is %.2f",sum/itemTotal);
    
    
    }
