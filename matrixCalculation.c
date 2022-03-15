/**
 * @file matrixCalculation.c
 * 48. Write a program to add, Subtract and multiply two matrixes Using 2D Array.
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
void main(){
    int row, col, n;
    printf("Enter your matrix size: \n");
    scanf("%d", &n);
    int a1[n][n], a2[n][n], add[n][n], sub[n][n], mul[n][n];
    printf("Enter your 1st matrix value: \n");
    for(row=1; row<=n; row++){
        for(col = 1; col<=n; col++){
            scanf("%d", &a1[row][col]);
        }
    }

    printf("\nEnter your 2nd matrix value: ");
    for(row=1; row<=n; row++){
        for(col = 1; col<=n; col++){
            scanf("%d", &a2[row][col]);
        }
    }

    printf("Addition of 2 matrix : \n");
    for(row=1; row<=n; row++){
        for(col = 1; col<=n; col++){
            add[row][col] = a1[row][col] + a2[row][col];
            printf("%d  ",add[row][col] );
        }
        printf("\n");
    }

    printf("Subtraction of 2 matrix : \n");
    for(row=1; row<=n; row++){
        for(col = 1; col<=n; col++){
            sub[row][col] = a1[row][col] - a2[row][col];
            printf("%d  ",sub[row][col] );
        }
        printf("\n");
    }
   
    printf("Multiplication of 2 matrix : \n");
    for(row=1; row<=n; row++){
        for(col = 1; col<=n; col++){
            mul[row][col] = a1[row][col] * a2[row][col];
            printf("%d  ",mul[row][col] );
            }
            printf("\n");
        }
        

}
