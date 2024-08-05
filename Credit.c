#include <cs50.h>
#include <math.h>
#include <stdio.h>

int main(void)
{
    int sum = 0;
    long long Num, cC;
    do
    {
        // ask for credit number
        cC = get_long("Enter your credit card number : ");
    }
    while (cC < 0); // check it smaller than 0

    // count how many digit
    Num = cC;
    int count = (log10(Num) + 1);

    // Luhn’s Algorithm
    while (Num != 0)
    {
        int num1 = Num % 10;              // take last number
        sum += num1;                      // add
        int num2 = 2 * ((Num / 10) % 10); // remove last number and take new last number
        int r1 = (num2 % 10) + floor((num2 / 10) % 10); // broke down to make sure one number
        sum += r1;                                      // add2
        Num /= 100;                                     // remove last two number from number
    }

    // Indentify card brand
    string cardName;
    int i_num = cC / pow(10, count - 2); // initial number
    if ((count == 13 || count == 16) && i_num / 10 == 4)
    {
        cardName = "VISA";
    }
    else if ((i_num == 34 || i_num == 37) && count == 15)
    {
        cardName = "AMEX";
    }
    else if (i_num >= 51 && i_num <= 55 && count == 16)
    {
        cardName = "MASTERCARD";
    }
    else
    {
        cardName = "INVALID";
    }

    // Final Identification
    if (sum % 10 == 0)
    {
        printf("%s", cardName);
    }
    else
    {
        printf("INVALID");
    }
    printf("\n");
    return 0;
}
