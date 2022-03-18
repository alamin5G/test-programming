/**
 * @file countDigit.c
 * Count number of digits in a number.
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-03-18
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include<stdio.h>
void main ()
{
    long long n; 

    int count = 0;
    printf(" Input a number =");
    scanf("%lld",&n);
    do
    {
        count++;
        n=n/10;
    }
    while(n!=0);

    printf("Count total  digit in a number  = %d",count);
}
