/**
 * @file string.c
 * Write a program that reads a first name, last name and year of birth and display the names and the year one after another sequentially.
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-03-12
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>
#include <string.h>
void main(){
    char fName[50], lName[50];
    int birthYear;

    printf("Enter your first name: ");
    scanf("%[^\n]%*c",&fName);
    printf("Enter your last name: ");
    scanf("%[^\n]%*c", &lName);
    printf("Enter your birth year: ");
    scanf("%d", &birthYear);
    printf("\nYour full name is: %s %s.\n", fName, lName );
    printf("Your birth year is: %d", birthYear);
}
