/**
 * @file matrixManipulationWithFunction.c
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

int input(int a[5][5]);
int show(int a[5][5]);
int add(int a[5][5],int b[5][5]);
int sub(int a[5][5],int b[5][5]);
int mul(int a[5][5],int b[5][5]);
int tran(int a[5][5]);

void main()
{
    int a[5][5],b[5][5], choice;
    char confirm;

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
        printf("Enter matrix 1 value: \n");
        input(a);
        printf("Enter matrix 2 value: \n");
        input(b);
        printf("show matrix 1 value: \n");
        show(a);
        printf("show matrix 2 value: \n");
        show(b);
        printf("Addition of 2 matrix: \n");
        add(a,b);
        break;
    case 2:
        printf("Enter matrix 1 value: \n");
        input(a);
        printf("Enter matrix 2 value: \n");
        input(b);
        printf("show matrix 1 value: \n");
        show(a);
        printf("show matrix 2 value: \n");
        show(b);
        printf("Subtraction of 2 matrix: \n");
        sub(a,b);
        break;

    case 3:
        printf("Enter matrix 1 value: \n");
        input(a);
        printf("Enter matrix 2 value: \n");
        input(b);
        printf("show matrix 1 value: \n");
        show(a);
        printf("show matrix 2 value: \n");
        show(b);
        printf("Multiplication of 2 matrix: \n");
        mul(a,b);
        break;
    case 4:
        printf("Enter matrix 1 value: \n");
        input(a);
        printf("show matrix 1 value: \n");
        show(a);
        printf("Transpose of 1 matrix: \n");
        tran(a);
        break;
    case 5:
        exit(0);

    default:
        printf("Invalid input.\n");
        printf("Please enter the correct input.\n");
        break;
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

int input(int a[5][5]){
    
    int i,j;
    for(i = 0;i < 3;i++)
    {
        for(j = 0;j < 3;j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    return a[i][j];
}

int show(int a[5][5]){
    int i,j;
    for(i = 0;i < 3;i++)
    {
        for(j = 0;j < 3;j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    return a[i][j];
}

int add(int a[5][5], int b[5][5]){
    int i,j, c[5][5];
    for(i = 0;i < 3;i++)
    {
        for(j = 0;j < 3;j++)
        {
            c[i][j] = a[i][j]+b[i][j];
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }

    return c[i][j];
}

int sub(int a[5][5], int b[5][5]){
    int i,j, c[5][5];
    for(i = 0;i < 3;i++)
    {
        for(j = 0;j < 3;j++)
        {
            c[i][j] = a[i][j]-b[i][j];
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }

    return c[i][j];
}

int mul(int a[5][5], int b[5][5]){
    int i,j,k, sum = 0, c[5][5];
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 3; k++)
            {
                sum = sum + a[i][k] * b[k][j];
            }
            c[i][j] = sum;
            printf("%d\t", c[i][j]);
            sum = 0;
        }
        printf("\n");
    }

    return c[i][j];
}

int tran(int a[5][5]){
    int i,j;
    for(i = 0;i < 3;i++)
    {
        for(j = 0;j < 3;j++)
        {
            printf("%d\t", a[j][i]);
        }
        printf("\n");
    }

    return a[i][j];
}

