#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int x = 20;
    int y ;

    printf("y�� ���� �Է��ϼ���: \n");
    scanf("%d", &y);

    if (x > y)
    {
        printf("x�� ���� y�� ������ Ů�ϴ�.\n");
    }
    else if (x < y) 
    {
        printf("x�� ���� y�� ������ �۽��ϴ�.\n");
    }

    return 0;
}
