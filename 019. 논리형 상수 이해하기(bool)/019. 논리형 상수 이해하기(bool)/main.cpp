#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h> //bool�� �������� �ʿ�
#define TRUE 1
#define FALSE 0

void main()
{
    int num1, num2;
    bool result;

    printf("ù��° ������ �Է��ϼ���: ");
    scanf("%d", &num1);

    printf("�ι�° ������ �Է��ϼ���: ");
    scanf("%d", &num2);

    result = (num1 < num2);

    if (result) 
    {
        printf("%d = ��\n", result);
    }
    else 
    {
        printf("%d=����\n", result);
    }
}
