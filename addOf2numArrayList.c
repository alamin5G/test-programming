/**
 * @file addOf2numArrayList.c
 * There’s a list of number in a row on the table. Your teacher is telling a number which is the addition of any of the two number from the given number list on the table.
 * Your job is to find that two number which addition is equal to the number given by your teacher. If there’s no pair of number in a list is equal to the given number by your teacher,
 * then you will say “Sir, there’s no pair of numbers equal to your number” otherwise you will show that two number which addition is equal to the given number by your teacher.
 * Write a program to solve the situation.
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-03-16
 *
 * @copyright Copyright (c) 2022
 *
 */
#include <stdio.h>

void main()
{
    int i, next, temp, s, n, f=0;
    printf("Enter the list size: \n");
    scanf("%d", &n);
    int lis[n];

    printf("Enter the list value: \n");
    for (i = 1; i <= n; i++)
    {
        scanf("%d", &lis[i]);
    }

    printf("teacher is telling, the number is: ");
    scanf("%d", &s);

    temp = s;

    for (i = 1; i <= n; i++)
    {
        for (next = i + 1; next <= n; next++)
        {
            if (temp == lis[i] + lis[next])
            {
                f++;
                printf("%d is addition of this %d and %d numbers.\n", s, lis[i], lis[next]);
                break;
            
            }
            
        }
        // if we get our result, so don't need to continue the outer loop also.
        if (f == 1)
            {
               break;
            }
            
    }

    if (f== 0)
    {
        printf("Sir, there\'s no pair of numbers equal to your %d number\n", s);
    }
    
}
