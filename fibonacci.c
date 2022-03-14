/**
 * @file fibonacci.c
 * The numbers in the sequence 1 1 2 3 5 8 13 21……………………. Are called Fibonacci numbers.
 * Write a program using a for loop to calculate and print the Fibonacci numbers.
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-03-15
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h> 
void main(){
    int n1, n2, n3, i,  sum, nSize;
    printf("Enter first two fibonacci numbers: ");
    scanf("%d %d", &n1, &n2);
    printf("Enter the last range of fibonacci numbers: ");
    scanf("%d", &nSize);

    printf("%d %d", n1, n2);
    for (i = 1; i <= nSize; i++)
    {
        n3 = n1+n2;
        printf("%3d", n3);
        n1 = n2;
        n2 = n3;        
    }
    
}
