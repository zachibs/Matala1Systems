#include <stdio.h>

int power(int x, unsigned int y)
{
    if (y == 0)
        return 1;
    else if (y % 2 == 0)
        return power(x, y / 2) * power(x, y / 2);
    else
        return x * power(x, y / 2) * power(x, y / 2);
}

int numberOfDigit(int num)
{

    int counter = 0;
    while (num > 0)
    {
        num = num / 10;
        counter += 1;
    }
    return counter;
}

static int count = 0;
int ArmStrongRecursive(int num);
int isArmstrong(int num)
{
    int num2 = num;
    count = 0;
    while (num > 0)
    {
        count += 1;
        num = num / 10;
    }
    num = num2;
    if (ArmStrongRecursive(num) == num2)
    {
        return 1;
    }
    else
        return 0;
}
int ArmStrongRecursive(int num)
{
    if (num > 0)
    {
        return ArmStrongRecursive(num / 10) + (power(num % 10, count));
    }
    return 0;
}

static int curr_sum;

int reverse(int);
int isPalindrome(int strin)
{
    if (strin == reverse(strin))
    {
        curr_sum = 0;
        return 1;
    }
    else
        curr_sum = 0;
    return 0;
}

int reverse(int num)
{
    int num2 = 0;
    if (num != 0)
    {
        num2 = num % 10;
        curr_sum *= 10;
        curr_sum += num2;
        reverse(num / 10);
    }
    return curr_sum;
}
