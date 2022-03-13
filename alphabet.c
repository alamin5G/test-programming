/**
 * @file alphabet.c
 * 18. Write a program to check whether a character is alphabet or not.
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
    char ch;
    printf("Enter a character to assure it Alphabet or not: ");
    scanf("%c", &ch);

    if (ch >= 'a' && ch <= 'z')
    {
        printf("%c- is alphabetical character ", ch);
    }
    else if (ch >= 'A' && ch <= 'Z')
    {
        printf("%c- is alphabetical character ", ch);
    }
    else
    {
        printf("%c- is not alphabetical character ", ch);
    }
}
