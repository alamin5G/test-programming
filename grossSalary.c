/**
 * @file grossSalary.c
 * Write a program to input basic salary of an employee and calculate its Gross salary according to 
following:
Basic Salary <= 10000: HRA = 20%, DA = 80%
Basic Salary <= 20000: HRA = 25%, DA = 90%
Basic Salary > 20000: HRA = 30%, DA = 95%
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-03-13
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h> 
void main(){ 
    int basic;
    float gross; 
    printf("Enter basic salary to calculate gross salary: ");
    scanf("%d", &basic);
    
    if (basic<= 10000)
    {
        gross = (basic*0.20) + (basic*0.80);
        printf("Gross salary is: %.2f",gross);
    }else if (basic <= 20000)
    {
         gross = (basic*0.25) + (basic*0.90);
         printf("Gross salary is: %.2f",gross);
    } else{
         gross = (basic*0.30) + (basic*0.95);
         printf("Gross salary is: %.2f",gross);
    }
    
    
    
    }
