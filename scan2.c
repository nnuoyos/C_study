#include <stdio.h>

void main() {
	//���� 2���� �Է¹��� �� ��� �������� ���

	int num1 = 0, num2 = 0, value = 0, rest = 0;

	printf("ù��° ���� :");
	scanf_s("%d", &num1);

	printf("�ι�° ���� :");
	scanf_s("%d", &num2);

	value = num1 / num2;
	rest = num1 % num2;

	printf("�� : %d\n", value);
	printf("������:%d\n", rest);


}