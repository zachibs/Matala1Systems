#include <stdio.h>

int fact(int r)
{
    int mul = 1;
    for (int i = 1; i <= r; i++)
    {
        mul = mul * i;
    }
    return mul;
}

int isPrime(int num)
{

    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int isStrong(int num)
{

    int sum = 0;

    int k = num;
    int r;

    while (k != 0)
    {
        r = (k % 10);

        int f = fact(r);
        k = k / 10;
        sum += f;
    }

    if (sum == num)
    {
        return 1;
    }
    else
        return 0;
}
