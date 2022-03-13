/**
 * @file shape1.c
 * 30. Write a program to print the following outputs using for loops.
 *  1
    2 2
    3 3 3
    4 4 4 4
    5 5 5 5 5
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-03-14
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <stdio.h>
void main(){
    int row, col, n;
    printf("Enter row size: ");
    scanf("%d", &n);
    for(row=1; row<=n; row++){
        for(col=1; col<=row; col++){
            printf("%d", row);
        }
        printf("\n");
    }

}