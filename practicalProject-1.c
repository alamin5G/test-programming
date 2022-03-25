/**
 * @file practicalProject-1.c
 * this is all about conversion of basic mesuring, science, math unit.
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-03-25
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <stdio.h>
#include <math.h>

//func declare 
float electricalPower(float a, float b);
void binToDec();
void decToBin();
void matrixMultiplication();
void celsiusToFahrenheit();
float fahrenheitToCelsius(float f);
void dayToYearMonth();
void addition(int n);
void division();
void miniuteToDay(int m);


void main()
{
    int choice, n;
    printf("\n\n****************Welcome to IUBAT Conversion********************\n\n");
    printf("Press:-\n");
    printf("1. for Binary to Decimal\n");
    printf("2. for Decimal to Binary\n");
    printf("3. for matrix multiplication\n");
    printf("4. for Celsius to Fahrenheit\n");
    printf("5. for Fahrenheit to Celsius\n");
    printf("6. for Days to year, month, days\n");
    printf("7. for addition\n");
    printf("8. for Division\n");
    printf("9. for Electrical Power calculation\n");
    printf("10. for Minutes to Day, hour and minutes.\n");

    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        binToDec();
        break;
    case 2:
        decToBin();
        break;
    case 3:
        matrixMultiplication();
        break;
    case 4:
        celsiusToFahrenheit();
        break;
    case 5:
        float fah;
        printf("Enter Fahrenheit degree: \n");
        scanf("%f",&fah);
        printf("%.2f fahrenheit = %.2f celsius\n",fah, fahrenheitToCelsius(fah));
        
        break;
    case 6:
        dayToYearMonth();
        break;
    case 7:
        printf("How many numbers want to calculate: \n");
        scanf("%d", &n);
        addition(n);
        break;
    case 8:
        division();
        break;
    case 9:
        float voltage, current;
        printf("Enter Voltage and Current : \n");
        scanf("%f%f", &voltage, &current);
        printf("The power(watt) is = %.1f\n", electricalPower(voltage, current));
        break;
    case 10:
        int min;
        printf("Enter minutes: \n");
        scanf("%d", &min);
        miniuteToDay(min);
        break;

    default:
        printf("Wrong Choice\n");
        break;
    }
}

// function
void binToDec()
{
    int rem, dec = 0, i = 0;
    long long bin, temp;
    printf("Enter your binary digit: \n");
    scanf("%lld", &bin);
    temp = bin;

    while (bin != 0)
    {
        rem = bin % 10;
        bin = bin / 10;
        dec = dec + rem * pow(2, i);
        i++;
    }
    printf("%lld is = %d\n", temp, dec);
}

/// decimal to binary

void decToBin()
{
    int dec, rem, i = 0ll * 0, temp;
    printf("Enter your Decimal digit\n");
    scanf("%d", &dec);
    temp = dec;

    long long bin[dec];

    while (dec != 0)
    {
        rem = dec % 2;
        dec = dec / 2;
        bin[i] = rem;
        ++i;
    }

    printf("%d decimal = binary ", temp);
    for (int j = i - 1; j >= 0; j--)
    {
        printf("%d", bin[j]);
    }
}

/// matrix multiplication
void matrixMultiplication()
{
    int i, j, k, sum = 0, n;
    printf("How many rows and column matrix: \n");
    scanf("%d", &n);
    int m1[n][n], m2[n][n], c[n][n];
    printf("Enter Matrix 1 value: \n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &m1[i][j]);
        }
    }
    printf("Enter Matrix 2 value: \n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &m2[i][j]);
        }
    }

    printf("Matrix 1 is: \n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d\t", m1[i][j]);
        }
        printf("\n");
    }

    printf("Matrix 2 is: \n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d\t", m2[i][j]);
        }
        printf("\n");
    }

    printf("Matrix Multiplication is: \n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            for (k = 0; k < n; k++)
            {
                sum = sum + m1[i][k] * m2[k][j];
            }
            c[i][j] = sum;
            sum = 0;
        }
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }
}

// celsius to fahrenheit c=((f-32)*5)/9
void celsiusToFahrenheit()
{
    float c, f;
    printf("Enter celsius temperature: \n");
    scanf("%f", &c);
    f = ((c * 9) / 5) + 32;
    printf("%.2f celsius = %.2f fahrenheit\n", c, f);
}

// fahrenheit to celsius c=((f-32)*5)/9
float fahrenheitToCelsius(float fahrenheit)
{
    float c = ((fahrenheit - 32) * 5) / 9;
    return c;
}

/// days to year month and days (skip leap year);

void dayToYearMonth()
{
    int givenDays, day, month, year;
    printf("Enter days: \n");
    scanf("%d", &givenDays);

    year = givenDays / 365;
    month = (givenDays % 365) / 30;
    day = givenDays - (year * 365 + month * 30);
    printf("%d days = %d year(s), %d month(s) and %d day(s)\n", givenDays, year, month, day);
}

// addition with passing parameter;
void addition(int count)
{
    int a[count], sum = 0;
    int temp = count;

    while (count--)
    {
        scanf("%d", &a[count]);
        sum = sum + a[count];
    }

    printf("The summation of ");
    for (int i = temp - 1; i >= 0; i--)
    {
        if (i == 0)
        {
            printf("%d = ", a[i]);
        }
        else
        {
            printf("%d + ", a[i]);
        }
    }

    printf("%d\n", sum);
}

/// Division

void division()
{
    int divisor, divisible, remain, quotient;
    printf("Enter divisible and divisor value: \n");
    scanf("%d%d", &divisible, &divisor);
    quotient = divisible / divisor;
    remain = divisible % divisor;
    printf("The %d / %d = %d, and remain %d\n", divisible, divisor, quotient, remain);
}

//electrical power p = vi
float electricalPower(float volt, float I){
    float p = volt * I;
    return p;
}

//minutes to day hour and minutes;
void miniuteToDay(int mins){
    int day, hour, m;
    day     = mins/1440;
    hour    = (mins%1440)/60;
    m       = mins - (day*1440+hour*60);
    printf("%d minutes = %d day(s), %d hours(s) and %d minute(s).\n", mins, day, hour, m);
}
