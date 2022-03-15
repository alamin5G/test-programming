/**
 * @file traverseArray.c
 * 49. Suppose you have an Array with the size of 10. Your program will input all the array elements from the user. Now using a loop, traverse the array.
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
    int arr[10], i, t, sum = 0, odd, iCheck, takeOddValue;

    printf("Enter array elements: ");
    for (i = 1; i <= 10; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 1; i <= 10; i++)
    {

        iCheck = i % 2;
        t = arr[i];
        odd = t % 2;

        if (odd == 1 && iCheck == 1)
        {
            takeOddValue = arr[i];
            sum = sum + takeOddValue;
            arr[i] = 0;
        }
    }

    printf("After traverse: \n");
    for(i=1; i<=10; i++){
        printf("%d\t", arr[i]);
    }
    printf("\nsum of odd index value: %d", sum);
}