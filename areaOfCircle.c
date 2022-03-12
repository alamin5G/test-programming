/* 2. Write a program to compute the perimeter and area of a circle with a given radius. */
#include <stdio.h>

#define PI 3.1416 //constant value

int main(){
    float radious, area;
    printf("Enter radious value: ");
    scanf("%f", &radious);

    area = PI * radious * radious;
    printf("The area of a circle is : %f", area);
    
    return 0;
}
