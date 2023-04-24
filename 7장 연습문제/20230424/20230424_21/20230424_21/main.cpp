#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
    int secret_num, guess, low = 1, high = 100, count = 0;

    printf("1부터 100사이의 숫자 중 하나를 선택해주세요: ");
    scanf("%d", &secret_num);


    while (1) 
    {

        srand(time(NULL));
        guess = low + rand() % (high - low + 1);
        printf("컴퓨터가 추측한 숫자는 %d 입니다.\n", guess);
        count++;


        if (guess == secret_num) 
        {
            printf("컴퓨터가 %d번째 시도에 숫자 %d를 맞췄습니다.\n", count, secret_num);
            break;
        }

        else if (guess < secret_num) 
        {
            printf("숫자가 작습니다.\n");
            low = guess + 1;
        }

        else 
        {
            printf("숫자가 큽니다.\n");
            high = guess - 1;
        }
    }
}
