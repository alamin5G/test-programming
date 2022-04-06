/**
 * @file recursivePrimeCheck.c
 * prime number check using recursive function
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-04-06
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <stdio.h>

int prime(int n, int i);

int main()
{
    int a, f; 
    printf("Enter a number: \n");
    scanf("%d", &a);
    f = prime(a, 2);
    if(f == 1){
        printf("%d is prime\n", a);
    }else
    {
        printf("%d is composite\n", a);
    }
    
    
    return 0;
}

int prime(int n, int i){
    if (n==i)
    {
        return 1;
    }else if (n%i == 0)
    {
        return 0;
    }else
    {
        return prime(n, i+1);
    }
    
    
}


