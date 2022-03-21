/**
 * @file doWhileSum.c
 * doing sum by using do while loop
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-03-20
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <stdio.h>

int main(){
    int i=1,n, sum = 0;

    printf("Enter a number to calculate the sum of 1 to n: ");
    scanf("%d", &n);

    do{
        sum = sum + i;
        i++;
    } while(i<= n);

    printf("total sum is : %d\n", sum);
    sum = 0; 
    sum = (n*(n+1))/2;
    printf("total sum is : %d", sum);

}