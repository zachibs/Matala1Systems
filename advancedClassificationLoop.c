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
{ // function that tell us how many digit in the number

    int counter = 0;
    while (num > 0)
    {
        counter++;
        num = num / 10;
    }
    return counter;
}

int isArmstrong(int num)
{

    int digitnum = numberOfDigit(num);

    int k = num;
    int r;
    int sum = 0;
    while (k > 0)
    {
        r = (k % 10);
        sum = sum + power(r, digitnum);
        k = k / 10;
    }

    if (sum == num)
    {
        return 1; // then the number  is Armstrong
    }
    else
        return 0; //   then the number  is not Armstrong
}

int isPalindrome(int num)
{
    int temp;
    int reversed = 0;
    int source = num;

    while (num != 0)
    {
        temp = num % 10;
        reversed = (reversed * 10) + temp;
        num = num / 10;
    }

    if (reversed == source)
    {
        return 1;
    }
    else
        return 0;
}