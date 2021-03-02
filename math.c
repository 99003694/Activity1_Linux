#include <stdlib.h>
#include <stdio.h>
#include "math.h"
#include "stdarg.h"

#define TRUE 1
#define FALSE 0

int factorial(int num1)
{
    int i,fact=1;
    for (i=1;i<=num1;i++)
    {
        fact=fact*i;
    }
    return fact;
}

int isprime(int num2)
{
    int i;
    for(i=1;i<num2;i++)
    {
        if (num2%i==0)
        {
            printf("Not prime");
        }
        else
        {
            printf("Prime");
        }
    }
    return 0;
}

int isPalindrome(int num3)
{
    int reverse = 0, remainder, original;
    original = num3;

    // reversed integer is stored in reversed
    while (num3!= 0) 
    {
        remainder = num3 % 10;
        reverse = reverse * 10 + remainder;
        num3 /= 10;
    }

    // palindrome if orignalN and reversedN are equal
    if (original == reverse)
        return TRUE;
    else
        return FALSE;

    return 0;
}

int vsum(int num4,...)
{
    int i;
    int total=0;
    va_list v_list;

    va_start (v_list,num4);
    for (i=0;i<num4;i++)
    {
        total=total+va_arg(v_list,int);

        va_end(v_list);
        printf("%d",total);
    }
    return 0;
    
}
