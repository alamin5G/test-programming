/**
 * @file reverseOrder.c
 * 45. Write a program to print the following characters in a reverse way. Test Characters: 'X', 'M', 'L' Expected Output: The reverse of XML is LMX
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-03-15
 *
 * @copyright Copyright (c) 2022
 *
 */
#include <stdio.h>
void main()
{
    int i;
    char ch[3];
    printf("Enter 3 separete Alphabetical Character: (without space) ");
    for (i = 0; i<3; i++)
    {
        scanf("%c", &ch[i]);
    }

    for (i =2; i>=0; i--)
    {
        printf("%c ", ch[i]);
    }
}
