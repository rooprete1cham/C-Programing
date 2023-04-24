#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define MAX_CAPACITY 500
#define MIN_LEVEL 20

void main()
{
    int fuel = 100;
    char action;
    int amount;

    printf("���翬�ᷮ: %d\n", fuel);

    while (1) {
        printf("���������� +, �Ҹ�� -�� �Է����ּ���: ");
        scanf(" %c%d", &action, &amount);

        if (action == '+') 
        {
            if (fuel + amount > MAX_CAPACITY) 
            {
                printf("�ִ� �뷮�� �ʰ��߽��ϴ�.\n");
            }
            else 
            {
                fuel += amount;
                printf("���� ���ᷮ: %d\n", fuel);
            }
        }
        else if (action == '-') 
        {
            if (fuel - amount < 0) 
            {
                printf("���ᰡ �����մϴ�.\n");
            }
            else 
            {
                fuel -= amount;
                printf("���� ���ᷮ: %d\n", fuel);

                if (fuel < MIN_LEVEL) 
                {
                    printf("(���) ���ᰡ %d���� �̸��Դϴ�.\n", MIN_LEVEL);
                }
            }
        }
    }
}
