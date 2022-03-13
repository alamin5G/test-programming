/**
 * @file ageGroup.c
 * 31. Write a program to read the age of 10 persons and count the number of persons in the age group 50 to 60.
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
    int nPerson, i, age, count=0;
    printf("How many person you want calculate the age: ");
    scanf("%d", &nPerson);
    for (i = 0; i < nPerson; i++)
    {
        scanf("%d", &age);
        if (age>= 50 && age <= 60)
        {
            count++;
        }
        
    }
    printf("50 to 60 ages persons are: %d", count);
    
}
