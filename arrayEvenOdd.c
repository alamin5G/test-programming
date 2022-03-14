/**
 * @file arrayEvenOdd.c
 * 41. For each integer n in the interval [a, b] (given as input):
• If 1<=n<=9, then print the English representation of it in lowercase. That is 1 for "one", 2 for "two" and so on.
• Else if n>9 and it is an even number, then print "even".
• Else if n>9 and it is an odd number, then print "odd".
Input Format
The first line contains an integer, 5
The second line contains an integer, 11
Sample Output
five
six
seven
eight
nine
even
odd
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-03-15
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h> 
#include <string.h>
void main(){
    
    char *arr[] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    int i, start, end;
    printf("Enter start size to n size: ");
    scanf("%d %d", &start, &end);

    for ( i = start; i <=end; i++)
    {
        if (i>=1 && i<=9)
        {
            printf("%s\n", arr[i-1]);
        }else if (i>9)
        {
            if (end%2 == 0)
            {
               printf("Even\n");
               break;
            }else{
                printf("odd");
                break;
            }
            
        }
        
        
    }
    

}
