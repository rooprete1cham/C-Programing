#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
    float n1, n2, n3, n4, n5;
    float sum, aver;

    printf("5���� �Ǽ��� �Է��ϼ���:");
    scanf("%f %f %f %f %f", &n1, &n2, &n3, &n4, &n5);

    sum = n1 + n2 + n3 + n4 + n5;
    aver = sum / 5;

    printf("���Դϴ�.: %.2f\n", sum);
    printf("��� �� �Դϴ�.: %.2f\n", aver);

}
