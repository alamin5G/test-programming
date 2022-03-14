/**
 * @file shape2.c
 * 33. Write a program to print a square size 5 by using the character S as shown below
    S S S S S
    S S S S S
    S S O S S
    S S S S S
    S S S S S
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
    int row, col,n, odd;
    char ch = 'O';
    printf("Enter row size: (must be odd size) ");
    scanf("%d", &n);
    odd = n%2;
    while (odd != 1)
    {
        printf("\n\nYour %d is not odd number. Enter again row size: (must be odd size): ",n);
        scanf("%d", &n);
        odd = n%2;
    }

    for(row=1; row<=n; row++){
        for(col =1; col<=n; col++){
            
            if(row == (n/2)+1 && col == (n/2)+1){
                printf("%c ",ch);
            }else{
                printf("S ");
            }
        }
        printf("\n");
    }

}
