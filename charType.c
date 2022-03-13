/**
 * @file charType.c
 * 20.Write a program to input any character and check whether it is alphabet, digit, or special
character
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-03-13
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <stdio.h>
void main()
{
    char chType;
    printf("Enter a character to assure it is alphabet, digit or special character: ");
    scanf("%c", &chType);

    if ((chType >= 'a' && chType <= 'z') || (chType >= 'A' && chType <= 'Z'))
    {
        printf("%c is Alphabetical Character.", chType);
    }
    else if ((chType >= '0') && (chType <= '9'))
    {
        printf("%c is digit character.", chType);
    }
    else
    {
        printf("%c is special character", chType);
    }
}
