#include <stdio.h>

void main() {

	char* msg = "Q. ���� �� ������ �ƴ� ����?";
	char* choiceMsg = "1.������\n2.�����\n3.�ڻԼ�\n4.�";
	char* resultMsg = "";

	int choice = 0;
	int answer = 4;

	while (1) {
		printf("%s\n%s\n", msg, choiceMsg);
		scanf_s("%d", &choice);


		if (choice == answer) {
			resultMsg = "����!";
		}

		else if (choice >= 1 && choice <= 4) {
			resultMsg = "����Ф�~~";
		}

		else {
			resultMsg = "�ٽ� �õ����ּ���!!";
		}
		printf("%s\n", resultMsg);

		if (choice == answer) { break; }

	}


}