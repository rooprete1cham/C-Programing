//�̷������Ƽ���а� 202315007 �ڽ¹� 2023-04-19
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
    int x, y, op, result;

    srand(time(NULL)); 

    for (int i = 0; i < 10; i++) 
    { 
        x = rand() % 10; 
        y = rand() % 10;
        op = rand() % 5; 

        switch (op) 
        {
        case 0:
            result = x + y;
            printf("%d ���ϱ� %d�� %d�Դϴ�.\n", x, y, result);
            break;
        case 1:
            result = x - y;
            printf("%d ���� %d�� %d�Դϴ�.\n", x, y, result);
            break;
        case 2: 
            result = x * y;
            printf("%d ���ϱ� %d�� %d�Դϴ�.\n", x, y, result);
            break;
        case 3:
            if (y == 0) 
            { 
                printf("0���� ���� �� �����ϴ�.\n");
            }
            else 
            {
                result = x / y;
                printf("%d ������ %d�� %d�Դϴ�.\n", x, y, result);
            }
            break;
        case 4: 
            if (y == 0)
            { 
                printf("0���� ���� �� �����ϴ�.\n");
            }
            else 
            {
                result = x % y;
                printf("%d ������ %d�� %d�Դϴ�.\n", x, y, result);
            }
            break;
        }
    }
}
