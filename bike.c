/**
 * @file bike.c
 * 12.Write a program to calculate a bike running (K.M) by per ltr pettrol. Input bike total traveled (K.M) and total fueled petrol (ltr)
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
    float traveled, fueled;
    printf("Enter Bike Total Traveled (K.M): ");
    scanf("%f",&traveled);
    printf("Enter used total fuel: ");
    scanf("%f", &fueled);
    printf("Bike running on per ltr pettrol: %.2f",traveled/fueled); //.2f means will show 2 number after decimal point.

}
