#include <stdio.h>

void main() {
	//""; : �� ���ڿ�
	char fruit[6] = "";
	printf("�����̸�: ");
	scanf_s("%s", &fruit, sizeof(fruit));

	printf("%s �� ���־�!!", fruit);
}