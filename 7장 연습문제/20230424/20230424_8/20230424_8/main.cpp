#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() 
{
    int n;
    printf("������ �Է��ϼ���: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) 
    {
        for (int j = 1; j <= i; j++) 
        {
            printf("%d ", j);
        }
        printf("\n");
    }
}