/**
 * @file gradeCalculation.c
 * 24.Write a program to input marks of five subjects Physics, Chemistry, Biology, Mathematics and 
 *Computer. Calculate the percentage and grade according to following:
 *Percentage >= 90%: Grade A
 *Percentage >= 80%: Grade B
 *Percentage >= 70%: Grade C
 *Percentage >= 60%: Grade D
 *Percentage < 60%: Grade F
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
    float avgMarks, physics, chemestry, biology, mathemetics, computer;
    printf("\nEnter your physics marks: \n");
    scanf("%f",&physics);
    printf("\nEnter your chemistry marks: \n");
    scanf("%f",&chemestry);
    printf("\nEnter your biology marks: \n");
    scanf("%f",&biology);
    printf("\nEnter your mathemetics marks: \n");
    scanf("%f",&mathemetics);
    printf("\nEnter your computer marks: \n");
    scanf("%f",&computer);
    avgMarks = (physics+chemestry+biology+mathemetics+computer)/5;
    

    if(avgMarks>=0 && avgMarks<= 100){
        if (avgMarks>89){
            printf("A grade");
        }else if(avgMarks>79){
            printf("B Grade");
        }else if(avgMarks>69){
            printf("C Grade");
        }else if (avgMarks>59)
        {
            printf("D Grade");
        }else{
            printf("F Grade");
        }
        
    }else{
        printf("there was some wrong input.. try again.");
    }
    
}
