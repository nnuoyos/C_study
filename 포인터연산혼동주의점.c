#include <stdio.h>

void main() {
	int x = 100;
	int* px = &x; //x�� �ּҸ� �����ϴ� ������
	//�ʱⰪ ���
	printf("x: %d\n", x);
	printf("&x: %d\n", &x);
	printf("*px: %d\n", *px);
	printf("px: %d\n", px);


	//1)px++
	px++;
	printf("x: %d\n", x);
	printf("&x: %d\n", &x);
	printf("*px: %d\n", *px);
	printf("px: %d\n", px);


	//2) *px++
	px = &x; //������ ������ 1�������� px���� �ٽ� �ʱ�ȭ ������

	printf("x: %d\n", x);
	printf("&x: %d\n", &x);
	printf("*px: %d\n", *px);
	printf("*px++: %d\n", *px++); 
	//*px++ => *px�� ������ �ִ� �ּҷ� ������ ���� ���� ������ �� ���� ��Ŵ. (���� ����)
	printf("px: %d\n", px);






}