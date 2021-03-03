#include "math.h"
#include "string.h"
#include <stdio.h>
#include <stdlib.h>
#include "bits.h"

int main()
{
int a = 4, i = 1; int initial=0;
int res=0;
int n;
int k;
int num1_fac = 4;
int num2_isprime = 131;
int num3_pali = 1235321;
char str1[100]="hello";
char str2[100]="world";

//math

printf("Factorial of %d is:\n", num1_fac);
int factorial(int num1_fac);
printf("%d is \n",num2_isprime);
int isprime(int num2_isprime);
printf(" is pallindrom? -> \n");
int isPalindrome(int num3_pali);


//string
int result=mystrlen(str1);
printf("Result=%d\n",result);

mystrcpy(str2,str1);
printf("string2 = %s \n",str2);


if(mystrcmp(str1,str2)==0)
{
    printf("Both the strings are equal\n");
}
else
{
    printf("Strings are not equal\n");
}

mystrcat(str1,str2);
printf("String1 = %s, String2 = %s\n",str1,str2);



//bitmask

printf("%d with %d-th bit Set: %d\n",n, k, set_bit(n, k));
printf("%d with %d-th bit Cleared: %d\n",n, k, clear_bit(n, k));
printf("%d with %d-th bit Toggled: %d\n",n, k, flip_bit(n, k));
res=query(n, k);
if(res)
    printf("SET");
else
    printf("NOTSET");

return 0;

}
