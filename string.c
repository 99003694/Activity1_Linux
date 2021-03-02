#include "string.h"
#include <stdio.h>

int mystrlen(const char *str1)
{
    int i=0;
    while (str1[i]!='\0')
    {
        i++;
    }
    return i;
    
}


int* mystrcpy(char* str1,const char *str2)
{
    int i=0;
    while(str2[i]!='\0')
    {
        str1[i]=str2[i];
        i++;
    }
    str1[i]='\0';
    return 0;

}

int mystrcmp(const char* str1, const char* str2)
{
    int i=0;
    while (str1[i]==str2[i] && str1[i]!='\0' && str2[i]!='\0')
    {
        i++;
    }
    if (str1[i]==str2[i])
    {
        return 0;
    }
    else if (str1[i]<str2[i])
    {
        return 1;
    }
    else
    {
        return -1;
    }
}

char* mystrcat(char * str1,const char *str2)
{
    int i=0;
    int j=0;
    while (str1[i]!='\0')
    {
        i++;
    }
    while (str2[j]!='\0')
    {
        str1[i]=str2[i];
        i++;
        j++;
    }
    str1[i]='\0';
    return str1;
}


