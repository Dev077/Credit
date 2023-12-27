#include <stdio.h>
#include <string.h>

int main(void)
{

    int countDigits(long num);         // counts number of digits in the number entered by the user
    int firstTwo(long num);            // a function that gets the second digit of the number entered by the user
    int firstOne(long num);            // a function that gets the first digit of the number entered by the user
    int cValidity(long num, int num1); // a function implementation of Luhn's Algorithm
    int numDigits;                     // stores the total number of digits in the number entered by user
    long cdn;                          // stores the number entered by the user
    int xr;                            // stores the first two digit of the number
    int xo;                            // stores the first digit of the number
    int checkSum;                      // stores the value from Luhn's Algorithm

    do {
        printf("Number: ");
        if (scanf("%ld", &cdn) != 1) {
            printf("Invalid input\n");
            return 1;
        }
    } while (cdn < 0);

    numDigits = countDigits(cdn);
    xr = firstTwo(cdn);
    xo = firstOne(cdn);

    checkSum = cValidity(cdn, numDigits);
    // printf("%i",checkSum);

    if (checkSum % 10 == 0)
    {

        if (numDigits == 15)
        {

            if (xr == 34 || xr == 37)
            {

                printf("AMEX\n");
            }
            else
            {
                printf("INVALID\n");
            }
        }

        else if (xo == 4)
        {
            printf("VISA\n");
        }

        else if (numDigits == 16)
        {

            if (50 < xr && xr < 56)
            {
                printf("MASTERCARD\n");
            }
            else
            {
                printf("INVALID\n");
            }
        }
    }
    else
    {
        printf("INVALID\n");
    }
}

int countDigits(long num)
{
    int count = 0;
    if (num == 0)
    {
        return 1;
    }
    while (num != 0)
    {
        num /= 10;
        count++;
    }
    return count;
}

int firstTwo(long num)
{

    long ft = num;
    while (ft >= 100)
    {
        ft /= 10;
    }

    return ft;
}

int firstOne(long num)
{

    long fo = num;
    while (fo >= 10)
    {
        fo /= 10;
    }

    return fo;
}

int cValidity(long num, int num1)
{
    int even1, even2, even3, even4, even5, even6, even7, even8, odd1, odd2, odd3, odd4, odd5, odd6, odd7, odd8, checksum;

    if (num1 == 16)
    {
        even1 = ((num % 100) / 10) * 2;
        even2 = ((num % 10000) / 1000) * 2;
        even3 = ((num % 1000000) / 100000) * 2;
        even4 = ((num % 100000000) / 10000000) * 2;
        even5 = ((num % 10000000000) / 1000000000) * 2;
        even6 = ((num % 1000000000000) / 100000000000) * 2;
        even7 = ((num % 100000000000000) / 10000000000000) * 2;
        even8 = ((num % 10000000000000000) / 1000000000000000) * 2;

        even1 = ((even1 % 100) / 10) + (even1 % 10);
        even2 = ((even2 % 100) / 10) + (even2 % 10);
        even3 = ((even3 % 100) / 10) + (even3 % 10);
        even4 = ((even4 % 100) / 10) + (even4 % 10);
        even5 = ((even5 % 100) / 10) + (even5 % 10);
        even6 = ((even6 % 100) / 10) + (even6 % 10);
        even7 = ((even7 % 100) / 10) + (even7 % 10);
        even8 = ((even8 % 100) / 10) + (even8 % 10);

        odd1 = (num % 10);
        odd2 = ((num % 1000) / 100);
        odd3 = ((num % 100000) / 10000);
        odd4 = ((num % 10000000) / 1000000);
        odd5 = ((num % 1000000000) / 100000000);
        odd6 = ((num % 100000000000) / 10000000000);
        odd7 = ((num % 10000000000000) / 1000000000000);
        odd8 = ((num % 1000000000000000) / 100000000000000);

        checksum =
            even1 + even2 + even3 + even4 + even5 + even6 + even7 + even8 + odd1 + odd2 + odd3 + odd4 + odd5 + odd6 + odd7 + odd8;
    }

    else if (num1 == 15)
    {
        even1 = ((num % 100) / 10) * 2;
        even2 = ((num % 10000) / 1000) * 2;
        even3 = ((num % 1000000) / 100000) * 2;
        even4 = ((num % 100000000) / 10000000) * 2;
        even5 = ((num % 10000000000) / 1000000000) * 2;
        even6 = ((num % 1000000000000) / 100000000000) * 2;
        even7 = ((num % 100000000000000) / 10000000000000) * 2;

        even1 = ((even1 % 100) / 10) + (even1 % 10);
        even2 = ((even2 % 100) / 10) + (even2 % 10);
        even3 = ((even3 % 100) / 10) + (even3 % 10);
        even4 = ((even4 % 100) / 10) + (even4 % 10);
        even5 = ((even5 % 100) / 10) + (even5 % 10);
        even6 = ((even6 % 100) / 10) + (even6 % 10);
        even7 = ((even7 % 100) / 10) + (even7 % 10);

        odd1 = (num % 10);
        odd2 = ((num % 1000) / 100);
        odd3 = ((num % 100000) / 10000);
        odd4 = ((num % 10000000) / 1000000);
        odd5 = ((num % 1000000000) / 100000000);
        odd6 = ((num % 100000000000) / 10000000000);
        odd7 = ((num % 10000000000000) / 1000000000000);
        odd8 = ((num % 1000000000000000) / 100000000000000);

        checksum = even1 + even2 + even3 + even4 + even5 + even6 + even7 + odd1 + odd2 + odd3 + odd4 + odd5 + odd6 + odd7 + odd8;
    }

    else if (num1 == 13)
    {
        even1 = ((num % 100) / 10) * 2;
        even2 = ((num % 10000) / 1000) * 2;
        even3 = ((num % 1000000) / 100000) * 2;
        even4 = ((num % 100000000) / 10000000) * 2;
        even5 = ((num % 10000000000) / 1000000000) * 2;
        even6 = ((num % 1000000000000) / 100000000000) * 2;

        even1 = ((even1 % 100) / 10) + (even1 % 10);
        even2 = ((even2 % 100) / 10) + (even2 % 10);
        even3 = ((even3 % 100) / 10) + (even3 % 10);
        even4 = ((even4 % 100) / 10) + (even4 % 10);
        even5 = ((even5 % 100) / 10) + (even5 % 10);
        even6 = ((even6 % 100) / 10) + (even6 % 10);

        odd1 = (num % 10);
        odd2 = ((num % 1000) / 100);
        odd3 = ((num % 100000) / 10000);
        odd4 = ((num % 10000000) / 1000000);
        odd5 = ((num % 1000000000) / 100000000);
        odd6 = ((num % 100000000000) / 10000000000);
        odd7 = ((num % 10000000000000) / 1000000000000);

        checksum = even1 + even2 + even3 + even4 + even5 + even6 + odd1 + odd2 + odd3 + odd4 + odd5 + odd6 + odd7;
    }

    else
    {
        checksum = 12;
    }

    return checksum;
}
