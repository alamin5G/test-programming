/**
 * @file primeNumber.c
 * 43. Write a program to check whether a number is Prime number or not.
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-03-15
 *
 * @copyright Copyright (c) 2022
 *
 */
#include <stdio.h>
void main()
{
    int i, n, c = 0;
    printf("Enter a positive number to assure it is prime or not: ");
    scanf("%d", &n);

    for (i = 2; i < n / 2; i++)
    {
        if (n % i == 0)
        {
            c++;
            break;
        }
    }
    if (c == 0)
    {
        printf("%d is prime number.", n);
    }else{
        printf("%d is not prime number.", n);
    }
}
