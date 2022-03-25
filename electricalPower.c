/**
 * @file electricalPower.c
 * calculate p= v*i;
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-03-25
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>

float electricalPower(float volt, float I);

int main()
{
    float voltage, current;
        printf("Enter Voltage and Current : \n");
        scanf("%f%f", &voltage, &current);
        float a = electricalPower(voltage, current);
        printf("The power(watt) is = %f\n",a );
    return 0;
}

//electrical power p = vi
float electricalPower(float volt, float I){
    
    return volt * I;
}


