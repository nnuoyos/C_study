#include <stdio.h>

void main() {

	//����, Ű, ������ �Է� �ޱ�
	//[�ʱⰪ]
	//���� : 0 
	//�Ǽ� : 0.0 
	//���� : ' '

	int age = 0;
	double height = 0.0, weight = 0.0;

	printf("����: ");
	scanf_s("%d", &age);

	printf("Ű: ");
	scanf_s("%lf", &height);

	printf("������: ");
	scanf_s("%lf", &weight);


	printf("�� ���̴� %d ���̰�, Ű�� %.2lfcm �Դϴ�.\n �����Դ� %.2lfkg�Դϴ�.\n", age, height, weight);

}