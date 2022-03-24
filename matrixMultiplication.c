/**
 * @file matrixMultiplication.c
 * Matrix multiplication
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-03-24
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <stdio.h>
void main()
{
    int n, r, c, k, sum = 0;
    printf("Enter matrix size: ");
    scanf("%d", &n);
    int m1[n][n], m2[n][n], mul[n][n];

    printf("Enter matrix 1 value: ");
    for(r=0; r<n; r++){
        for(c=0; c<n; c++){
            scanf("%d", &m1[r][c]);
        }
    }
    printf("Enter matrix 2 value: ");
    for(r=0; r<n; r++){
        for(c=0; c<n; c++){
            scanf("%d", &m2[r][c]);
        }
    }
    printf("\nmatrix 1 value: \n");
    for(r=0; r<n; r++){
        for(c=0; c<n; c++){
            printf("%d\t", m1[r][c]);
        }
        printf("\n");
    }
    printf("\nmatrix 2 value: \n");
    for(r=0; r<n; r++){
        for(c=0; c<n; c++){
            printf("%d\t", m2[r][c]);
        }
        printf("\n");
    }

    printf("\nMultiplication value of matrix 1 and Matrix 2 is: \n");
    for(r=0; r<n; r++){
        for(c=0; c<n; c++){
            for(k=0; k<n; k++){
                sum = sum + m1[r][k] * m2[k][c];
            }
            mul[r][c] = sum;
            sum = 0;
        }
    }

  
    for(r=0; r<n; r++){
        for(c=0; c<n; c++){
            printf("%d\t", mul[r][c]);
        }
        printf("\n");
    }


}
