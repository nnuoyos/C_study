#include <stdio.h>




//5���� ������ �Է¹ް� �ּҰ��� �ִ밪�� �����ִ� �Լ�
//�����͸� ����Ͽ�, ������ ���� �ʾƵ� ���� ��� �ǵ���

void getMaxAndMin(int arData[], int*max, int*min) {

	*max = arData[0];
	*min = arData[0];

	for (int i = 1; i < 5; i++) {
		if (*max < arData[i]) { *max = arData[i]; }
		if (*min > arData[i]) { *min = arData[i]; }
	}
}

void main() {

	int arData[5] = { 4,7,3,9,8 };
	int max = 0;
	int min = 0;

	getMaxAndMin(arData, &max, &min);
	printf("�ִ밪 %d\n", max);
	printf("�ּҰ� %d\n", min);
}
