#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
    int secret_num, guess, low = 1, high = 100, count = 0;

    printf("1���� 100������ ���� �� �ϳ��� �������ּ���: ");
    scanf("%d", &secret_num);


    while (1) 
    {

        srand(time(NULL));
        guess = low + rand() % (high - low + 1);
        printf("��ǻ�Ͱ� ������ ���ڴ� %d �Դϴ�.\n", guess);
        count++;


        if (guess == secret_num) 
        {
            printf("��ǻ�Ͱ� %d��° �õ��� ���� %d�� ������ϴ�.\n", count, secret_num);
            break;
        }

        else if (guess < secret_num) 
        {
            printf("���ڰ� �۽��ϴ�.\n");
            low = guess + 1;
        }

        else 
        {
            printf("���ڰ� Ů�ϴ�.\n");
            high = guess - 1;
        }
    }
}
