#define _CRT_SEUCRE_NO_WARNINGS
#include <stdio.h>

void main()
{
    int i, j;
    for (i = 1; i <= 7; i++) 
    {
        for (j = 1; j <= 7 - i; j++) 
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++) 
        {

            printf("*");
        }
        printf("\n");
    }
}