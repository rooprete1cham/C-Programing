#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
    int sticks = 12; 
    int num; 
    srand(time(NULL)); 

    while (sticks > 0) 
    { 
        printf("���� ��ƽ ����: %d\n", sticks);
        printf("����ڴ� �� ���� ��ƽ�� ���������? (0~3��): ");
        scanf("%d", &num);
        while (num < 0 || num > 3 || num > sticks) 
        { 
            printf("�߸��� �Է��Դϴ�. 0~%d���� ��ƽ �߿��� �����ϼ���: ", sticks);
            scanf("%d", &num);
        }
        sticks -= num;
        if (sticks == 0) 
        {
            printf("��ǻ�� �¸�\n");
            break;
        }
        printf("��ǻ�ʹ� %d���� ��ƽ�� ���������ϴ�.\n", rand() % (sticks > 3 ? 4 : sticks)); 
        sticks -= num;
        if (sticks == 0) 
        {
            printf("�¸�\n");
            break;
        }
    }
}
