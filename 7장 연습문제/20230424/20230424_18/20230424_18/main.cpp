#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
    int n;
    double sum = 0.0;
    printf("���� ����: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) 
    {
        sum += 1.0 / i;
    }
    printf("������ ��: %lf\n", sum);
}
