#include <cs50.h>
#include <stdio.h>

int main(void)
{
    long cardno = get_long("Enter Your Card Number: ");
    long n = cardno;
    int sum = 0;
    int length = 0;

    // luhn’s algorithm
    while (n > 0)
    {
        int last_digit = n % 10;

        // every other digit from right
        if (length % 2 == 1)
        {
            int doubled = last_digit * 2;
            sum += (doubled / 10) + (doubled % 10);
        }
        else
        {
            sum += last_digit;
        }

        n /= 10;
        length++;
    }

    // Checksum validation
    bool valid = (sum % 10 == 0);

    // Get first two digits
    n = cardno;
    while (n >= 100)
    {
        n /= 10;
    }
    int first_two = n;
    int first_one = first_two / 10;

    // card type
    if (valid)
    {
        if ((first_two == 34 || first_two == 37) && length == 15)
        {
            printf("AMEX\n");
        }
        else if (first_two >= 51 && first_two <= 55 && length == 16)
        {
            printf("MASTERCARD\n");
        }
        else if (first_one == 4 && (length == 13 || length == 16))
        {
            printf("VISA\n");
        }
        else
        {
            printf("INVALID\n");
        }
    }
    else
    {
        printf("INVALID\n");
    }
}
