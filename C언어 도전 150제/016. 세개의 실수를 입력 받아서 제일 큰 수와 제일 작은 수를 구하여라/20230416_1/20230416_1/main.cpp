#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() 
{
    float n1, n2, n3;
    float n4, n5;

    printf("�� ���� �Ǽ��� �Է��ϼ���: ");
    scanf("%f %f %f", &n1, &n2, &n3);

    n4 = n1;
    n5 = n1;

    if (n2 > n4) 
    {
        n4 = n2;
    }
    if (n3 > n4)
    {
        n4 = n3;
    }

    if (n2 < n5)
    {
        n5 = n2;
    }
    if (n3 < n5)
    {
        n5 = n3;
    }

    printf("���� ū ��: %.2f\n", n4);
    printf("���� ���� ��: %.2f\n", n5);

}
