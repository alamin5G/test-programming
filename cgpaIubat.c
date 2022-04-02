/**
 * @file cgpaIubat.c
 * calculate sgpa of IUBAT university
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-04-02
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

float marksCal(float first, float mid, float quiz, float attendance, float assignment, float final);
float labMarks(float report, float attendance, float assignment, float final);
float gradeCalc(float totalMarks);
int validateMarks(int mark);

int main()
{
    float first, mid, quiz, attendance, assignment, final, report;
    float csc183, csc184, mat147, art204, eng102;
    int crCsc183 = 3, crCsc184 = 1, crMat147 = 3, crArt204 = 3, crEng102 = 3, totalCredit;
    float gradePoint, SGPA;
    char *name;

    printf("--Welcome to IUBAT SGPA Calculation System---\n");
    printf("Enter your full name: \n");
    gets(name);
    printf("Enter your marks for CSC-183: (first, mid, quiz, attendance, assignment, final) \n");
    scanf("%f%f%f%f%f%f", &first, &mid, &quiz, &attendance, &assignment, &final);
    csc183 = marksCal(first, mid, quiz, attendance, assignment, final);
    validateMarks(gradeCalc(csc183));
    printf("Enter your marks for CSC-184: (report, attendance, assignment, final) \n");
    scanf("%f%f%f%f", &report, &attendance, &assignment, &final);
    csc184 = labMarks(report, attendance, assignment, final);
    validateMarks(gradeCalc(csc184));
    printf("Enter your marks for MAT-147: (first, mid, quiz, attendance, assignment, final) \n");
    scanf("%f%f%f%f%f%f", &first, &mid, &quiz, &attendance, &assignment, &final);
    mat147 = marksCal(first, mid, quiz, attendance, assignment, final);
    validateMarks(gradeCalc(mat147));
    printf("Enter your marks for ART-204: (first, mid, quiz, attendance, assignment, final) \n");
    scanf("%f%f%f%f%f%f", &first, &mid, &quiz, &attendance, &assignment, &final);
    art204 = marksCal(first, mid, quiz, attendance, assignment, final);
    validateMarks(gradeCalc(art204));
    printf("Enter your marks for ENG-102: (first, mid, quiz, attendance, assignment, final) \n");
    scanf("%f%f%f%f%f%f", &first, &mid, &quiz, &attendance, &assignment, &final);
    eng102 = marksCal(first, mid, quiz, attendance, assignment, final);
    validateMarks(gradeCalc(eng102));

    gradePoint = (gradeCalc(csc183) * crCsc183) + (gradeCalc(csc184) * crCsc184) + (gradeCalc(mat147) * crMat147) + (gradeCalc(eng102) * crEng102) + (gradeCalc(art204) * crArt204);
    totalCredit = crCsc183 + crCsc184 + crMat147 + crArt204 + crEng102;
    SGPA = gradePoint / totalCredit;

    
        printf("\n\nHello, ");
        puts(name);
        printf("You result is : \n");
        printf("CSC-183: %.2f\n", gradeCalc(csc183));
        printf("CSC-184: %.2f\n", gradeCalc(csc184));
        printf("MAT-147: %.2f\n", gradeCalc(mat147));
        printf("ART-204: %.2f\n", gradeCalc(art204));
        printf("ENG-102: %.2f\n", gradeCalc(eng102));
        printf("SGPA: %.2f\n", SGPA);

    return 0;
}



float marksCal(float first, float mid, float quiz, float attendance, float assignment, float final)
{
    float gradeMarks = first + mid + quiz + attendance + assignment + final;
    return gradeMarks;
}



float labMarks(float report, float attendance, float assignment, float final)
{
    float gradeMarks = report + attendance + assignment + final;
    return gradeMarks;
}


float gradeCalc(float totalMarks)
{
    if (totalMarks >= 0 && totalMarks <= 100)
    {
        if (totalMarks >=90)
        {
            return 4.0;
        }
        else if (totalMarks >=87 && totalMarks < 90)
        {
            return 3.7;
        }
        else if (totalMarks >=84 && totalMarks < 87)
        {
            return 3.4;
        }
        else if (totalMarks >= 80 && totalMarks < 84)
        {
            return 3.1;
        }
        else if (totalMarks >=77 && totalMarks < 80)
        {
            return 2.8;
        }
        else if (totalMarks >=74 && totalMarks < 77)
        {
            return 2.5;
        }
        else if (totalMarks >=70 && totalMarks <74)
        {
            return 2.2;
        }
        else if (totalMarks >=65 && totalMarks < 70)
        {
            return 1.5;
        }
        else if (totalMarks >=60 && totalMarks < 65)
        {
            return 1.0;
        }
        else
        {
            return 0.0;
        }
    }
    else
    {
        return 5;
    }
}


int validateMarks(int mark)
{

    if (mark == 5)
    {
        printf("You have entered invalid marks!! \nInput Valid marks, Total marks can not less than 0 and more than 100.\n\n");
        exit(0);
    }
}
