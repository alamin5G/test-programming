/* 2. Write a program to compute the perimeter and area of a circle with a given radius. */
#include <stdio.h>

#define PI 3.1416 //constant value

int main(){
    float radious, area, perimeter;
    printf("Enter radious value: ");
    scanf("%f", &radious);

    area = PI * radious * radious;
    perimeter = 2 * radious * PI;
    printf("The area of a circle is : %f\n", area);
    printf("The perimeter of circle is : %f", perimeter);
    return 0;
}
