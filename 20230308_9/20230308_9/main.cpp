/**********************************
*�����̸� : main.c
*����     : �μ��� ���� ���ϴ� ���α׷��Դϴ�.
*�ۼ���   : �� �� ��
*�ۼ����� : 2023.03.08
***********************************/

#include <stdio.h> //��ó�� 

int main(void) //�����Լ�
{
	int x; //����(variable)����
	int y;//������ �ʴ� ���� ���
	int sum;
	
	//int x,y,sum;

	x = 100; //����
	y = 200;
	////////////// ���� ///////////////
	sum = x + y;
	printf("�μ��� ��: %d\n", sum); //���

	///////////// ���� ////////////////
	sum = x - y;
	printf("�μ��� ��:%d\n", sum); //���

	///////////// ���� ////////////////
	sum = x * y;
	printf("�μ��� ��:%d\n", sum); //���

	//////////// ������ ///////////////
	sum = x / y;
	printf("�μ��� ������ : %d\n", sum); //���

	//////////// ������ ///////////////
	sum = x / y;
	printf("x�� y�� ���� ������:%d\n", sum); //���
	return 0; //�Լ��� ��ȯ �Լ� ��°��� 0���� ��ȯ���ִ� �Լ�
}