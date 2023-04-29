#include <stdio.h>
#include <stdlib.h>
#define _USE_MATH_DEFINES     // M_PI를 사용하기 위해서 추가
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
	printf("달리기 선수가 %4.1lfm 트랙 한 바퀴를 %4.1lfs에 돈다. \n\n", distance, time);


	printf("(a) 달리기 선수의 평균속력을 구하여라. \n\n");

	if (solution == SHOW)
	{
		printf("\n\n\n");
		printf("=========================   풀 이   =============================\n\n");


		printf("관련 공식은 평균속도 입니다. \n\n");
		printf("달리기 선수가 이동한 거리는 %4.2lfm 입니다. \n\n", distance);
		printf("이동에 소요된 시간은 총%4.2lfs 입니다. \n\n", time);
		printf("평균속력 = %4.1lfm / %4.1lfs \n\n", distance, time);


	}

	if (answer == SHOW)
	{

		printf("=========================   정 답   =============================\n\n");
		avarage_velocity = distance / time;
		printf("관련공식은 평균속력 = %4.1lfm / %4.1lfs 이다.\n\n", distance, time);
		printf("따라서 %4.1lfm / %4.1lfs 만 계산하면 된다.\n\n", distance, time);
		printf("그러므로 %4.1lfm / %4.1lfs 을 구하면 %4.1lfm/s 이다.\n\n", distance, time, avarage_velocity);
		printf("=================================================================\n");
		printf("\n\n\n");
	}
	printf("(b) 달리기 선수의 평균속도를 구하여라\n\n");
	if (solution == SHOW)
	{

		printf("=========================   풀 이   =============================\n\n");
		printf("관련공식은 평균속도 = %4.1lfm / %4.1lfs 이다\n\n", displacement, time);
		printf("달리기 선수가 이동한 거리는 %4.1lfm 가 맞으나,\n\n", distance);
		printf("%4.1lfm를 달려서 처음위치로 돌아왔기 때문에,변위는 %4.1lfm 이다.\n\n", distance, displacement);
		printf("이동에 소요된 시간은 총%4.2lfs 입니다. \n\n", time);
		printf("평균속도 = %4.1lfm / %4.1lfs \n\n", displacement, time);
		printf("=================================================================\n\n");
	}

	if (answer == SHOW)
	{

		printf("=========================   정 답   =============================\n\n");
		avarage_speed = displacement / time;
		printf("관련공식은 평균속도 = %4.1lfm / %4.1lfs 이다.\n\n", displacement, time);
		printf("따라서 %4.1lfm / %4.1lfs 만 계산하면 된다.\n\n", displacement, time);
		printf("그러므로 %4.1lfm / %4.1lfs 을 구하면 %4.1lfm/s이다.\n\n", displacement, time, avarage_speed);
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
	printf("%4.1lfkm/h의 속력으로 달리는 자동차가 연료가 떨어져서 \n\n", initial_velocity);
	printf("일정한 %4.2lfm/s로 감속되었다.", time);


	printf("(a) 자동차가 정지 할 때 까지 주행한 거리는 얼마인가? \n\n");

	if (solution == SHOW)
	{
		printf("\n\n\n");
		printf("=========================   풀 이   =============================\n\n");
		printf("관련 공식은 v^2 - v0^2 = 2 * a * x 입니다. \n\n");
		printf("v는 나중속도 v0는 처음속도,a는 가속도 x는 거리입니다. \n\n");
		printf("km/h를 m/s로 바꾸기 위해 %4.2lf을 나누면 된다. \n\n", conversion);
		printf("v0는 처음속도이므로 %4.2lfm/s 이다. \n\n", initial_velocity);
		printf("현재 차가 감속하고 있으므로 가속도가 음수이다. \n\n");
		printf("식은 x = ((%4.2lfm/s)^2 - (%4.2lfkm/h / %4.2lf)^2) / 2 * %4.2lfm/s^2가 됩니다. \n\n", final_velocity, initial_velocity, conversion, acceleration);
		printf("=================================================================\n\n");

	}

	if (answer == SHOW)
	{

		printf("=========================   정 답   =============================\n\n");
		displacement_velocity = initial_velocity / conversion;
		distance = (final_velocity * final_velocity) - (displacement_velocity * displacement_velocity) / 2.0 * acceleration;
		printf("관련공식을 정리하여  x = ((%4.2lfm/s)^2 - (%4.2lfm/s)^2) / 2 * %4.2lfm/s^2 \n\n", final_velocity, displacement_velocity, acceleration);
		printf("따라서 km/h를 m/s로 바꾸고,거리 구하는 공식으로 바꿔줬다.\n\n");
		printf("그러므로 ((%4.2lfm/s)^2 - (%4.2lfkm/h / %4.2lf)^2) 구하고, 2 * %4.2lfm/s^2 를 구하여 나누어주면 %4.2lfm 가 나온다. \n\n", final_velocity, initial_velocity, conversion, acceleration, distance);
		printf("=================================================================\n");
		printf("\n\n\n");
	}
	printf("(b) 달리기 선수의 평균속도를 구하여라\n\n");
	if (solution == SHOW)
	{

		printf("=========================   풀 이   =============================\n\n");

		printf("=================================================================\n\n");
	}

	if (answer == SHOW)
	{

		printf("=========================   정 답   =============================\n\n");

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