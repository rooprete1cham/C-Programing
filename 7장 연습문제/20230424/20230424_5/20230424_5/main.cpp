#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
    double r, result = 1.0;
    int n, i;

    printf("�Ǽ����� �Է��Ͻÿ�: ");
    scanf("%lf", &r);

    printf("�ŵ� ���� Ƚ���� �Է��Ͻÿ�: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) 
    {
        result *= r;
    }

    printf("������� : 2%lf\n",result);
}
