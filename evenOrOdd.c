/**
 * @file evenOrOdd.c
 * 14.Write a Program to find Even or Odd number.
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
    printf("Enter a number to assure even or odd: ");
    scanf("%d",&number);
    
    if(number%2 == 0){
        printf("%d is even number", number);
    }else{
        printf("%d is not even number",number);
    }

    // or you can use ternery operator such kind of easy operation

    (number%2 == 0)?(printf("\n\n%d is even number",number)):(printf("\n\n%d is not even number",number));

}
