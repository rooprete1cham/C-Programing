#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
    int n;
    printf("카운터의 초기값을 입력하시오 : ");
    scanf("%d", &n);

    for (int i = n; i >= 1; i--)
    {
        printf("%d ", i);
    }
    printf("\n");
}