#include <stdio.h>

void main() {

	char* msg = "�����Ͻ� ��ȣ�� �����ϼ���.\n";
	char* choiceMsg = "1.�нǽŰ�\n2.��ȣ�̵�\n3.�ű԰���\n0.���� ����";

	int choice = 0;

	do{

		printf("%s\n%s\n", msg, choiceMsg);
		scanf_s("%d", &choice);

		switch (choice) {

		case 1: case 2: case 3:
			printf("�ȳ��ϼ��� ����\n");
			break;
		}

	}while (choice != 0);

}