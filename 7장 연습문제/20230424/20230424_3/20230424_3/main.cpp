#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
    int num1, num2, num3, sum;
    printf("������ �Է��ϼ���: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    sum = 0;
    if (num1 >= 0) 
    {
        sum += num1;
    }
    if (num2 >= 0) 
    {
        sum += num2;
    }
    if (num3 >= 0) 
    {
        sum += num3;
    }

    printf("���� %d�Դϴ�.\n", sum);
}
