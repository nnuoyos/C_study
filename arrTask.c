#include <stdio.h>

void main() {
	int arrIncome[2][3] = { 0, };
	int total = 0;
	double avg = 0.0;


	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%d�� %dȣ ���� �Է�[����:����]\n", i+1, j+1);
			scanf_s("%d", arrIncome[i] + j);
			total += arrIncome[i][j];
		}
	}

	avg = (double)total / 6;
	printf("�� ���� \n%d ����", total);
	printf("��� ����: %.2f ����", avg);

}