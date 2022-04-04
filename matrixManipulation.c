/**
 * @file matrixManipulation.c
 * matrix manipulation
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-04-04
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <stdio.h>
#include <stdlib.h>

// function calling
void add();
void subtract();
void multiply();
void transpose();

// main function.
int main()
{
    int choice, a[3][3], c, d, k[3][3];
    char confirm;

//  choose the operation
first:
    printf("\nChoose the matrix operation,\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Transpose\n");
    printf("5. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        add();
        break;
    case 2:
        subtract();
        break;

    case 3:
        multiply();
        break;
    case 4:
        transpose();
        break;
    case 5:
        exit(0);

    default:
        printf("Invalid input.\n");
        printf("Please enter the correct input.\n");
    }

    printf("Do you want another operation? (y/n)\n");
    scanf(" %c", &confirm);
    if (confirm == 'y' || confirm == 'Y')
    {
        goto first;
    }
    else
    {
        exit(0);
    }
}

// addition
void add()
{
    int a[5][5], b[5][5], k[5][5], c, d;

    printf("Enter the Elements of Frirst Array\n");
    for (c = 0; c < 3; c++)
    {
        for (d = 0; d < 3; d++)
        {
            scanf("%d", &a[c][d]);
        }
    }
    printf("Enter the Elements of second Array\n");
    for (c = 0; c < 3; c++)
    {
        for (d = 0; d < 3; d++)
        {
            scanf("%d", &b[c][d]);
        }
    }

    printf("The addition of the matrix is: \n");
    for (c = 0; c < 3; c++)
    {
        for (d = 0; d < 3; d++)
        {

            k[c][d] = a[c][d] + b[c][d];
            printf("%d\t", k[c][d]);
        }
        printf("\n");
    }
}

// sub
void subtract()
{
    int a[5][5], b[5][5], k[5][5], c, d;

    printf("Enter the Elements of Frirst Array\n");
    for (c = 0; c < 3; c++)
    {
        for (d = 0; d < 3; d++)
        {
            scanf("%d", &a[c][d]);
        }
    }
    printf("Enter the Elements of second Array\n");
    for (c = 0; c < 3; c++)
    {
        for (d = 0; d < 3; d++)
        {

            scanf("%d", &b[c][d]);
        }
    }
    printf("The subtraction of the matrix is: \n");
    for (c = 0; c < 3; c++)
    {
        for (d = 0; d < 3; d++)
        {

            k[c][d] = a[c][d] - b[c][d];
            printf("%d\t", k[c][d]);
        }
        printf("\n");
    }
}

// multiplication
void multiply()
{
    int a[5][5], b[5][5], k[5][5], n, c, d, sum;

    printf("Enter the Elements of Frirst Array\n");
    for (c = 0; c < 3; c++)
    {
        for (d = 0; d < 3; d++)
        {
            scanf("%d", &a[c][d]);
        }
    }
    printf("Enter the Elements of second Array\n");
    for (c = 0; c < 3; c++)
    {
        for (d = 0; d < 3; d++)
        {
            scanf("%d", &b[c][d]);
        }
    }
    printf("1ST MATRIX IS: \n");
    for (c = 0; c < 3; c++)
    {
        for (d = 0; d < 3; d++)
        {
            printf("%d\t", a[c][d]);
        }
        printf("\n");
    }
    printf("2nd MATRIX IS: \n");
    for (c = 0; c < 3; c++)
    {
        for (d = 0; d < 3; d++)
        {
            printf("%d\t", b[c][d]);
        }
        printf("\n");
    }
    printf("Multiplication of two matrix: \n");

    for (c = 0; c < 3; c++)
    {
        for (d = 0; d < 3; d++)
        {
            sum = 0;
            for (n = 0; n < 3; n++)
            {
                sum = sum + a[c][n] * b[n][d];
            }

            k[c][d] = sum;
            printf("%d\t", k[c][d]);
        }
        printf("\n");
    }
}

// transpose Matrix
void transpose()

{
    int A[5][5], c, r;

    printf("Enter matrix A value: \n");
    for (r = 0; r < 3; r++)
    {
        for (c = 0; c < 3; c++)
        {
            scanf("%d", &A[r][c]);
        }
    }
    printf("The matrix of A are: \n");
    for (r = 0; r < 3; r++)
    {
        for (c = 0; c < 3; c++)
        {
            printf("%d\t", A[r][c]);
        }
        printf("\n");
    }
    printf("The transpose of A matrix are: \n");
    for (r = 0; r < 3; r++)
    {
        for (c = 0; c < 3; c++)
        {
            printf("%d\t", A[c][r]);
        }
        printf("\n");
    }
}