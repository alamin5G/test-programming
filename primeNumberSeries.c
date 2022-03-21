/**
 * @file primeNumberSeries.c
 * Write a program to print the 1 to n prime numbers series.
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-03-21
 * 
 * @copyright Copyright (c) 2022
 * 
 */

/*series of prime number check*/
#include<stdio.h>
void main()
{
    int i, j,n,c;
    printf("Enter the number \n");
    scanf("%d",&n);

    for(i=2; i<=n; i++)
    {
        c=0;
        for(j=2; j<=i/2; j++)
        {
            if(i%j==0)
            {
                c++;
                break;
            }
        }
        if(c==0)
        {
            printf("%d ",i);
        }
    }

}
