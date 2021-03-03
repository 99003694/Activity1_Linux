
#include <stdio.h>
#include <unistd.h>

int main()
{
    int ret= fork();
    printf("Hello world \n Ret= %d",ret);
}