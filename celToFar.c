/**
 * @file CelToFar.c
 * 5. Write a program that converts Centigrade to Fahrenheit.
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
    int cel, far=0;
    printf("Enter your celsius degree: ");
    scanf("%d", &cel);
    far = ((cel*9)/5)+32; // see the fahrenheit formula in google image
    printf("The %d celsius to fahrenheit value is: %d", cel,far);

}
