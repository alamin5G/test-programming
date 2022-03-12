/*3. Write a program to find the third angle of a triangle if two angles are given.*/

#include <stdio.h>

int main(){
    int a, b, c; //as we know triangle denote with a b c;
    printf("Enter two angle value ex: a and b : ");
    scanf("%d %d", &a, &b); //for input 2 integer value using twice %d
    c = 180 - (a+b); //we know, triangle total (3 angle) value is 180 degree.
    printf("triangle c value is : %d", c);
    return 0;    
}