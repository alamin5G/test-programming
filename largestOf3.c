/**
 * @file largestOf3.c
 * 11.Write a program that accepts three integers and find the maximum of three.
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
    int n1, n2, n3, largest; 
    printf("Enter 3 separate integer for n1, n2 and n3 to find out the largest number: ");
    scanf("%d %d %d", &n1, &n2, &n3);
    largest = (n1>n2)?((n1>n3)?(n1):(n3)):((n2>n3)?(n2):(n3)); //ternary operator, see more on google
    printf("%d is the largest number among n1 = %d, n2 =%d and n3=%d\n\n", largest, n1, n2, n3);

    //or u can use if else to  findout the largest number;
    if(n1> n2){
        if (n1>n3)
        {
            printf("%d is the largest number among n1 = %d, n2 =%d and n3=%d", n1, n1, n2, n3);
        }else{
            printf("%d is the largest number among n1 = %d, n2 =%d and n3=%d", n3, n1, n2, n3);
        }
        
    }else  {
        if (n2>n3)
        {
            printf("%d is the largest number among n1 = %d, n2 =%d and n3=%d", n2, n1, n2, n3);
        }else{
            printf("%d is the largest number among n1 = %d, n2 =%d and n3=%d", n3, n1, n2, n3);
        }
        
    }

    ///Or you can use this if else if else method to findout the largest number

    if(n1>n2 && n1> n3){
        printf("\n\n%d is the largest number among n1 = %d, n2 =%d and n3=%d", n1, n1, n2, n3);
    } else if(n2> n1 && n2> n3){
        printf("\n\n%d is the largest number among n1 = %d, n2 =%d and n3=%d", n1, n1, n2, n3);
    } else{
        printf("\n\n%d is the largest number among n1 = %d, n2 =%d and n3=%d", n3, n1, n2, n3);
    }
}
