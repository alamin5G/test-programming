/**
 * @file matrixCalculation.c
 * 53. Write a program to perform manipulation of matrix using different module as follows -
Addition () -> to make addition of two matrix
Subtraction () -> to make subtraction of two matrix
Multiplication () -> to multiply two matrices
Transpose () -> to transpose the 1st matrix
Print () -> print any matrix
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-03-15
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <stdio.h>
#include <math.h>

void main()
{
    int row, col, n, selection;
    printf("Enter your matrix size: \n");
    scanf("%d", &n);
    int a1[n][n], a2[n][n], add[n][n], sub[n][n], mul[n][n], transpose[n][n], transpose2[n][n];
    printf("Enter your 1st matrix value: \n");
    for (row = 1; row <= n; row++)
    {
        for (col = 1; col <= n; col++)
        {
            scanf("%d", &a1[row][col]);
        }
    }

    printf("\nEnter your 2nd matrix value: ");
    for (row = 1; row <= n; row++)
    {
        for (col = 1; col <= n; col++)
        {
            scanf("%d", &a2[row][col]);
        }
    }

    printf("\n\n**************************************\n");

    printf("\nPress 1 for matrix addition\nPress 2 for matrix subtraction\nPress 3 for matrix multiplication\nPress 4 for transpose of matrix\nPress 5 for print the matrix\n");
    scanf("%d", &selection);

    switch (selection)
    {
    case 1:
        printf("Addition of 2 matrix : \n");
        for (row = 1; row <= n; row++)
        {
            for (col = 1; col <= n; col++)
            {
                add[row][col] = a1[row][col] + a2[row][col];
                printf("%d  ", add[row][col]);
            }
            printf("\n");
        }
        break;

    case 2:
        printf("Subtraction of 2 matrix : \n");

        for (row = 1; row <= n; row++)
        {
            for (col = 1; col <= n; col++)
            {
                sub[row][col] = a1[row][col] - a2[row][col];
                printf("%d  ", sub[row][col]);
            }
            printf("\n");
        }
        break;

    case 3:
        printf("Multiplication of 2 matrix : \n");

        for (row = 1; row <= n; row++)
        {
            for (col = 1; col <= n; col++)
            {
                mul[row][col] = a1[row][col] * a2[row][col];
                printf("%d  ", sub[row][col]);
            }
            printf("\n");
        }
        break;

    case 4:
        printf("Transpose of 1st matrix : \n");
        for (row = 1; row <= n; row++)
        {
            for (col = 1; col <= n; col++)
            {
                transpose[col][row] = a1[row][col];
            }
        }

        for (row = 1; row <= n; row++)
        {
            for (col = 1; col <= n; col++)
            {
                printf("%d  ", transpose[row][col]);
            }
            printf("\n");
        }

        printf("Transpose of 2nd matrix : \n");
        for (row = 1; row <= n; row++)
        {
            for (col = 1; col <= n; col++)
            {
                transpose2[col][row] = a2[row][col];
            }
        }

        for (row = 1; row <= n; row++)
        {
            for (col = 1; col <= n; col++)
            {
                printf("%d  ", transpose2[row][col]);
            }
            printf("\n");
        }

        break;

    case 5:
        printf("1st matrix: \n");
        for (row = 1; row <= n; row++)
        {
            for (col = 1; col <= n; col++)
            {
                a1[row][col];
                printf("%d  ", a1[row][col]);
            }
            printf("\n");
        }

        printf("2nd matrix: \n");
        for (row = 1; row <= n; row++)
        {
            for (col = 1; col <= n; col++)
            {
                a2[row][col];
                printf("%d  ", a2[row][col]);
            }
            printf("\n");
        }
        break;
    default:
        printf("invalid!!");
        break;
    }
}
