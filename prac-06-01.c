#include <stdio.h>

void main() {

	int age = 0;
	int price = 0;

	printf("���̸� �Է��ϼ���:");
	scanf_s("%d", &age);

	price=age >= 20 ? 1250 : 800;

	printf("����� ���̴� %d���̸�, ����� %d�� �Դϴ�!", age, price);

}