#include <stdio.h>

void main() {

	//1~10���� �迭�� ��� ���
	int arData[10] = { 0, };

	for (int i = 0; i < 10; i++) {
		arData[i] = i + 1;
		printf("%d ", arData[i]);

	}



	//10~1 ���� �� ¦���� �迭�� ��� ���
	int arData[5] = { 0, }; //¦���� ����ϴϱ� 5���� �ݺ�
	for (int i = 0; i < 5; i++) {
		arData[i] = (i + 1) * 2; // i= 0~4, (i+1=1~5)*2 = 2,4,6,8,10
		printf("%d ", *(arData + i));

	}

}