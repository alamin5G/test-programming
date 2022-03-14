/**
 * @file shape6.c
 * 38. Write a program to print a triangle as shown below
              *
            *   *
          *   *   *
        *   *   *   *
      *   *   *   *   *
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
    int row, col, space, n;
    printf("Enter row size: ");
    scanf("%d", &n);
    printf("This is fat pyramid: \n");
    for(row=1; row<=n; row++){
        for(space=1; space<=n-row; space++){
            printf("   "); // it is required
        }
        for(col=1; col<=row; col++){
            printf(" *    "); // it required for it's output, if you want more space..
        }
        printf("\n");
    }

    // or u can use this code instead of that, output are similar.
    printf("This is thin pyramid: \n");//used for separete from top loop;
    for(row=1; row<=n; row++){
        for(space=1; space<=n-row; space++){
            printf(" "); // it is required
        }
        for(col=1; col<=row; col++){
            printf("* "); // it required for it's output, if you want more space..
        }
        printf("\n");
    }

}
