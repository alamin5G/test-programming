/**
 * @file checkQubeOfitDigit.c
 * 
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-04-16
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h> 
void main(){
    int digit, n, rem, temp;

    printf("Enter numbers (ex: 153): ");
    scanf("%d", &n);
    temp = n; // keeping our input in another variable

    while(temp != 0 ){ //if t == 0 then loop won't work.
        rem = temp%10; // we have to take the last digit of our inputted numbers.
        //adding the last digit with cube value (if our inputted value is 153,
        // our rem value is 3 which will be added in digit + 3 * 3* 3 = 27)
        //then our new digit = will be 27
        //after that we divide 153/10 = 15
        //temp is 15, condition true
        //15%10 = rem = 5;
        //digit = 27 + 5 *5*5 = 27 + 125 = 152;
        //15/10 = 1;
        //temp = 1;
        //1%10 = 1;
        // digit = 152 + 1 *1*1 = 152+1 = 153;
        //1/10 = 0 (because of int value)
        //temp is 0, condition false, loop end;
        digit = digit + rem * rem * rem;
        temp = temp/10;
    }


    //now our concern is digit = our inputted number or not?
    //if digit == n then yes, its a number, where its digit cubic summation equal to our inputted value:
    //neither not. it is not matched.
    
    if (digit == n)
    {
       printf("yes, summation of its digit cubic");
    } else{
        printf("no summation of its digit cubic");
    }
    
}
