// Write a C program to determine whether a given number is prime or not.

#include <stdio.h>

int main()
{
    int n, i, count = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n <= 1)
    {
        printf("%d is not a Prime number", n);
    }
    else
    {
        for (i = 1; i <= n; i++)
        {
            if (n % i == 0)
            {
                count++;
            }
        }

        if (count == 2)
        {
            printf("%d is a Prime number", n);
        }
        else
        {
            printf("%d is not a Prime number", n);
        }
    }

    return 0;
}