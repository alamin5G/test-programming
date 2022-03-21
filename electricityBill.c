/**
 * @file electricityBill.c
 * calculate the electricity bill.
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-03-21
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <stdio.h>

void main()
{
    int unit;
    float amt, sur_charge, total_amt, net_amt;
    printf("Enter unit(s): ");
    scanf("%d", &unit);

    if (unit <= 50)
    {
        amt = unit * 0.50;
        sur_charge = amt * 0.20;
        net_amt = amt + sur_charge;
        printf("The net payable amount is %.2f", net_amt);
    }
    else if (unit > 50 && unit <= 100)
    {
        total_amt = 25 + ((unit - 50) * 0.75);
        sur_charge = total_amt * 0.20;
        net_amt = total_amt + sur_charge;
        printf("The net payable amount is %.2f", net_amt);
    }
}