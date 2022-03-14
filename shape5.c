/**
 * @file shape5.c
 * 37. Write a program to print a triangle as shown below:
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-03-15
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h> 
void main(){
    int row, col, rowSize, num =1;
    printf("Enter row size: ");
    scanf("%d", &rowSize);

    for(row=1; row<=rowSize; row++){
        for (col =1; col <=row; col++)
        {
            printf("%4d",num++);
        }
        printf("\n");
    }
}
