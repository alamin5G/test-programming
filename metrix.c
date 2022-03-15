/**
 * @file metrix.c
 * 47. Write a program to print a matrix using array.
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-03-15
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void main(){
    int arr[0][0], a, b, row, col;

    printf("Enter matrix row and colum size: \n");
    scanf("%d %d", &row, &col);
    arr[row][col];
    printf("The matrix is: \n");
    for(a=1; a<=row; a++){
        for(b=1; b<=col; b++){
            printf("%d  ", rand()%10);
        }
        printf("\n");
    }
}
