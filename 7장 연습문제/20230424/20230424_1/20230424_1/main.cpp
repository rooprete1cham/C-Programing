#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
    int n;
    printf("ī������ �ʱⰪ�� �Է��Ͻÿ� : ");
    scanf("%d", &n);

    for (int i = n; i >= 1; i--)
    {
        printf("%d ", i);
    }
    printf("\n");
}