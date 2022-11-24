#include <stdio.h>
#include <math.h>
#include "NumClass.h"

int main()
{
    int i;
    int first;
    int second;

    scanf("%d", &first);
    scanf("%d", &second);

    printf("The Armstrong numbers are:");
    for (i = first; i <= second; i++)
    {
        if (isArmstrong(i) == 1)
        {
            printf(" %d", i);
        }
    }

    printf("\nThe Palindromes are:");
    for (i = first; i <= second; i++)
    {
        if (isPalindrome(i) == 1)
        {
            printf(" %d", i);
        }
    }

    printf("\nThe Prime numbers are:");
    for (i = first; i <= second; i++)
    {
        if (isPrime(i) == 1)
        {
            printf(" %d", i);
        }
    }

    printf("\nThe Strong numbers are:");
    for (i = first; i <= second; i++)
    {
        if (isStrong(i) == 1)
        {
            printf(" %d", i);
        }
    }
    printf("\n");

    return 0;
}
