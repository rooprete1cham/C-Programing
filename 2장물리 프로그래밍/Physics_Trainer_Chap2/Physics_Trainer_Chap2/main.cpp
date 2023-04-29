#include <stdio.h>
#include <stdlib.h>
#define _USE_MATH_DEFINES     // M_PI�� ����ϱ� ���ؼ� �߰�
#include <math.h>

#define SHOW          1
#define NOT_SHOW      0
#define Show_Solution 1
#define Answer        1 


#define DEG2RAD(x)  x*M_PI/180.
#define RAD2DEG(x)  x*180/M_PI

void Excersize_2_6(int solution, int answer)
{
	double distance = 200.0;
	double time = 25.0;
	double displacement = 0.0;
	double avarage_velocity;
	double avarage_speed;
	printf("\n\n");
	printf("2-6 \n");
	printf("�޸��� ������ %4.1lfm Ʈ�� �� ������ %4.1lfs�� ����. \n\n", distance, time);


	printf("(a) �޸��� ������ ��ռӷ��� ���Ͽ���. \n\n");

	if (solution == SHOW)
	{
		printf("\n\n\n");
		printf("=========================   Ǯ ��   =============================\n\n");


		printf("���� ������ ��ռӵ� �Դϴ�. \n\n");
		printf("�޸��� ������ �̵��� �Ÿ��� %4.2lfm �Դϴ�. \n\n", distance);
		printf("�̵��� �ҿ�� �ð��� ��%4.2lfs �Դϴ�. \n\n", time);
		printf("��ռӷ� = %4.1lfm / %4.1lfs \n\n", distance, time);


	}

	if (answer == SHOW)
	{

		printf("=========================   �� ��   =============================\n\n");
		avarage_velocity = distance / time;
		printf("���ð����� ��ռӷ� = %4.1lfm / %4.1lfs �̴�.\n\n", distance, time);
		printf("���� %4.1lfm / %4.1lfs �� ����ϸ� �ȴ�.\n\n", distance, time);
		printf("�׷��Ƿ� %4.1lfm / %4.1lfs �� ���ϸ� %4.1lfm/s �̴�.\n\n", distance, time, avarage_velocity);
		printf("=================================================================\n");
		printf("\n\n\n");
	}
	printf("(b) �޸��� ������ ��ռӵ��� ���Ͽ���\n\n");
	if (solution == SHOW)
	{

		printf("=========================   Ǯ ��   =============================\n\n");
		printf("���ð����� ��ռӵ� = %4.1lfm / %4.1lfs �̴�\n\n", displacement, time);
		printf("�޸��� ������ �̵��� �Ÿ��� %4.1lfm �� ������,\n\n", distance);
		printf("%4.1lfm�� �޷��� ó����ġ�� ���ƿԱ� ������,������ %4.1lfm �̴�.\n\n", distance, displacement);
		printf("�̵��� �ҿ�� �ð��� ��%4.2lfs �Դϴ�. \n\n", time);
		printf("��ռӵ� = %4.1lfm / %4.1lfs \n\n", displacement, time);
		printf("=================================================================\n\n");
	}

	if (answer == SHOW)
	{

		printf("=========================   �� ��   =============================\n\n");
		avarage_speed = displacement / time;
		printf("���ð����� ��ռӵ� = %4.1lfm / %4.1lfs �̴�.\n\n", displacement, time);
		printf("���� %4.1lfm / %4.1lfs �� ����ϸ� �ȴ�.\n\n", displacement, time);
		printf("�׷��Ƿ� %4.1lfm / %4.1lfs �� ���ϸ� %4.1lfm/s�̴�.\n\n", displacement, time, avarage_speed);
		printf("=================================================================\n");
		printf("\n\n\n");
	}
}
void Excersize_2_18(int solution, int answer)
{
	double distance;
	double initial_velocity = 40.0;
	double time = 1;
	double final_velocity = 0.0;
	double acceleration = -0.5;
	double conversion = 3.6;
	double displacement_velocity;


	printf("\n\n");
	printf("2-18 \n");
	printf("%4.1lfkm/h�� �ӷ����� �޸��� �ڵ����� ���ᰡ �������� \n\n", initial_velocity);
	printf("������ %4.2lfm/s�� ���ӵǾ���.", time);


	printf("(a) �ڵ����� ���� �� �� ���� ������ �Ÿ��� ���ΰ�? \n\n");

	if (solution == SHOW)
	{
		printf("\n\n\n");
		printf("=========================   Ǯ ��   =============================\n\n");
		printf("���� ������ v^2 - v0^2 = 2 * a * x �Դϴ�. \n\n");
		printf("v�� ���߼ӵ� v0�� ó���ӵ�,a�� ���ӵ� x�� �Ÿ��Դϴ�. \n\n");
		printf("km/h�� m/s�� �ٲٱ� ���� %4.2lf�� ������ �ȴ�. \n\n", conversion);
		printf("v0�� ó���ӵ��̹Ƿ� %4.2lfm/s �̴�. \n\n", initial_velocity);
		printf("���� ���� �����ϰ� �����Ƿ� ���ӵ��� �����̴�. \n\n");
		printf("���� x = ((%4.2lfm/s)^2 - (%4.2lfkm/h / %4.2lf)^2) / 2 * %4.2lfm/s^2�� �˴ϴ�. \n\n", final_velocity, initial_velocity, conversion, acceleration);
		printf("=================================================================\n\n");

	}

	if (answer == SHOW)
	{

		printf("=========================   �� ��   =============================\n\n");
		displacement_velocity = initial_velocity / conversion;
		distance = (final_velocity * final_velocity) - (displacement_velocity * displacement_velocity) / 2.0 * acceleration;
		printf("���ð����� �����Ͽ�  x = ((%4.2lfm/s)^2 - (%4.2lfm/s)^2) / 2 * %4.2lfm/s^2 \n\n", final_velocity, displacement_velocity, acceleration);
		printf("���� km/h�� m/s�� �ٲٰ�,�Ÿ� ���ϴ� �������� �ٲ����.\n\n");
		printf("�׷��Ƿ� ((%4.2lfm/s)^2 - (%4.2lfkm/h / %4.2lf)^2) ���ϰ�, 2 * %4.2lfm/s^2 �� ���Ͽ� �������ָ� %4.2lfm �� ���´�. \n\n", final_velocity, initial_velocity, conversion, acceleration, distance);
		printf("=================================================================\n");
		printf("\n\n\n");
	}
	printf("(b) �޸��� ������ ��ռӵ��� ���Ͽ���\n\n");
	if (solution == SHOW)
	{

		printf("=========================   Ǯ ��   =============================\n\n");

		printf("=================================================================\n\n");
	}

	if (answer == SHOW)
	{

		printf("=========================   �� ��   =============================\n\n");

		printf("=================================================================\n");
		printf("\n\n\n");
	}
}

int main(void)
{

	printf("=================================================================\n");
	printf("======================= Halla University ========================\n");
	printf("======================= Future Mobility  ========================\n");
	printf("======================== Pysics Trainer  ========================\n");
	printf("========================   Chapter 2     ========================\n");
	printf("=================================================================\n");


	Excersize_2_6(Show_Solution, Answer);
	Excersize_2_18(Show_Solution, Answer);
}