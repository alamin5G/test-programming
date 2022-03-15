/**
 * @file GCDnadLCM.c
 * 42. Write a program to find greatest common divisor (GCD) and least common multiple (LCM) of given two numbers.
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
    int n1, n2, num1, num2, lcm, rem;
    printf("Enter two positive value: \n");
    scanf("%d %d", &n1, &n2);

    while(n1<0 || n2<0){
        printf("%d and %d is not positive numbers. Enter two positive value: \n", n1, n2);
        scanf("%d %d", &n1, &n2);
    }

    num1 = n1;
    num2 = n2;

    while (num2 != 0)
    {
       rem = num1%num2;
       num1 = num2;
       num2 = rem;
    }

    printf("\n%d and %d\'s GCD is = %d", n1, n2, num1);
    lcm = (n1*n2)/num1;
    printf("\n%d and %d\'s LCM is = %d", n1, n2, lcm);

}
