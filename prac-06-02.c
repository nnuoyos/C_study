#include <stdio.h>

void main() {


	//���̸� �Է��ϼ��� 12�̻�
	//	Ű�� �Է��ϼ��� 120 �̻� 
	//	���̱ⱸ�� ž���� �� �ֽ��ϴ�


	int age = 0, height = 0;
	int canRide = 0;

	printf("���̸� �Է��ϼ���:");
	scanf_s("%d", &age);
	printf("Ű�� �Է��ϼ���:");
	scanf_s("%d", &height);

	canRide= age >= 12 && height >= 120;
	printf(canRide ? "���̱ⱸ ž���ض�" : "���̱ⱸ Ÿ������");
	



}