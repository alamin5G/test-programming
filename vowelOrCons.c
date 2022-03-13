/**
 * @file vowelOrCons.c.
 * 19. Write a program to input any alphabet and check whether it is vowel or consonant.
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
    char ch; 
    printf("Enter an alphabetical character to assure it is vowel or consonant: ");
     scanf("%c", &ch); 
     if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' ){
         printf("%c is Vowel", ch);
     }else{
         printf("%c is Consonant", ch);
     }

 }
