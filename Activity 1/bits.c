#include "bits.h"
#include <stdio.h>
#include <stdlib.h>
//To set
int set_bit(int a, int b)
{
    return (a | (1 << (b - 1)));
}

/* To clear the bth bit of a */

int clear_bit(int a, int b)
{
    return (a & (~(1 << (b - 1))));
}


// To toggle 
int flip_bit(int a, int b)
{
    return (a ^ (1 << (b - 1)));
}

int query(int a, int b)
{
    if ((a >> (b - 1)) & 1)
        return SET;
    else
        return NOTSET;
}
