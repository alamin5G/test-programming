/**
 * @file fibonaccSer.c
 * fibonacci series 
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-04-10
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <stdio.h>

void main()
{
    int first = 0, last = 1, sum = 0, n, i;
    printf("Enter fibonacci n value: \n");
    scanf("%d", &n);

    printf("%d %d ", first, last);
    for(i = 0;i <n-2;i++)
    {
        sum = first + last; 
        printf("%d ", sum);
        first = last;
        last = sum;
    }
    
}