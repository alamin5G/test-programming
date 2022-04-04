/**
 * @file stringCountChar.c
 * count total number of alphabets, digits and special characters in a string
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-04-03
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <stdio.h>
#include <string.h>

int main()
{
    char str[200];
    int i = 0, digit, alphabet, special;
    digit = alphabet = special = 0;
    printf("write something\n");
    gets(str);
    
    while(str[i] != '\0'){
        if (str[i] >= 'a' && str[i]<= 'z' || str[i]>= 'A' && str[i]<= 'Z')
        {
            alphabet++;
        }
        else if (str[i] >= '0' && str[i]<= '9' )
        {
            digit++;
        }else{
            special++;
        }
        
        i++;
    }

    printf("%d alphabet.\n", alphabet);
    printf("%d digit.\n", digit);
    printf("%d special character.\n", special);
    return 0;
}
