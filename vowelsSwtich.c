/**
 * @file vowelsSwtich.c
 * 27. Write a program to check whether an alphabet is vowel or consonant using switch case.
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
    char ch;
    printf("Enter a character to assure it is vowel or consonant: ");
    scanf("%c",&ch);
    
    switch (ch)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':    
        printf("%c is vowel", ch);
        break;
    
    default:
        printf("%c is consonant", ch);
        break;
    }


}
