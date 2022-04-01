/**
 * @file bankAccountCreate.c
 * Create a bank account with given info
 * 1. Name
 * 2. Date of Birth
 * 3. NID
 * 4. Bank Name
 * 5. Account No.
 * 6. Account Security Code
 * 7. Saving money.
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-04-01
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <stdio.h>
#include <string.h>

int main()
{
    char fName[12], lName[12], dob[20], confirmation,temp;
    int age, nid, accountNo = 21303138, securityCode, confirmPass;
    float money, total=0, minAmount = 500.00;

    printf("Enter your age: \n");
    scanf("%d", &age);
    if (age < 18)
    {
        printf("Sorry, you are not eligible to Open an Bank Account.\n");
        printf("Try again after %d year(s).\n", 18 - age);
    }
    else
    {
        printf("------------------Welcome to IUBAT Student Bank---------------\n\n\n");
        printf("Enter your first name: \n");
        scanf("%s", &fName);
        printf("Enter your last name: \n");
        scanf("%s", &lName);
        printf("Enter your Date of Birth: \n");
        	scanf("%c",&temp); // temp statement to clear buffer
        fgets(dob,20,stdin);
        printf("Enter your NID number: \n");
        scanf("%d", &nid);
        accountNo = accountNo + 1;
        printf("Enter your new Security Code:\n");
        scanf("%d", &securityCode);

        printf("\n\n--Thank you for open an account in IUBAT Student Bank\n\n");
        printf("You have to deoposite at least 500 taka in your account, now.\n");
        printf("How much amount do you want to deposite? \n");
        scanf("%f", &money);
        while (money < minAmount)
        {
            printf("Sorry, you have to deposite at least 500 tks.\n");
            printf("Deposite at least 500 tks, now: \n");
            scanf("%f", &money);
        }
        total = money;
        printf("Would you like to deposite again? (y/n):\n");
        scanf(" %c", &confirmation);
        if (confirmation == 'y' || confirmation == 'Y')
        {
addMoneyAgain:
            printf("How much amount you want to deposite? \n");
            scanf("%f", &money);
            while (money < minAmount)
            {
                printf("Sorry, you have to deposite at least 500 tk.\n");
                printf("Deposite at least 500 tk, now: \n");
                scanf("%f", &money);
            }
            total = total + money;

            goto accountInfo;
        }
        else
        {
accountInfo:
            printf("Want to show your account information, now?(y/n) ");
            scanf(" %c", &confirmation);
            if (confirmation == 'y' || confirmation == 'Y')
            {
                printf("Enter your security code: \n");
                scanf("%d", &confirmPass);
                while (securityCode != confirmPass)
                {
                    printf("Your security code was wrong.\n");
                    printf("Enter your security code again: \n");
                    scanf("%d", &confirmPass);
                }

                if (confirmPass == securityCode)
                {
                    printf("Your full name: %s %s\n", fName, lName);
                    printf("Your Date of Birth: %s", dob);
                    printf("Your NID Number: %d\n", nid);
                    printf("Your Bank Account Number: %d\n", accountNo);
                    printf("Your total deposited amount: %.2f\n\n", total);

                    printf("Do you want to deposite more moeny?(y/n)\n");
                    scanf(" %c", &confirmation);
                    if (confirmation == 'y' || confirmation == 'Y')
                    {
                        goto addMoneyAgain;
                    }
                    else
                    {
                        printf("\n\nThank you for having with us.\n");
                    }
                }
            }
            else
            {
                printf("\n\nThank you for having with us.\n");
            }
        }
    }

    return 0;
}

