/**
 * @file salary.c
 * 10.Write a program that accepts an employee's ID, total worked hours of a month and the amount 
he received per hour. Print the employee's ID and salary (with two decimal places) of a 
particular month
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
    int id, work_hour;
    float hourRate, totalSalary;
    printf("Enter Employee's ID: ");
    scanf("%d", &id);
    printf("Enter monthly working hours : ");
    scanf("%d", &work_hour);
    printf("Enter per hour rate: ");
    scanf("%f",&hourRate);
    totalSalary = work_hour * hourRate;
    printf("%d\'s total salary is: %.2f",id, totalSalary);
}