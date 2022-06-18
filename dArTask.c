#include <stdio.h>
#include <stdlib.h>

//�Լ� ����
void getMaxAndMin(int*, int, int*, int*);

void main() {
	int size = 0;
	int max = 0, min = 0;
	int* dAr = 0;

	printf("������ ����: ");
	scanf_s("%d", &size);

	//����ڿ��� �Է� ���� ������ŭ ���� �迭�� ĭ�� �Ҵ��Ѵ�
	dAr = (int*)calloc(size, sizeof(int));

	for (int i = 0; i < size; i++) {
		printf("%d ��° ����: ", i + 1); //i=0���� �����ϹǷ�, +1 �� 1��°�� ������ش�
		scanf_s("%d", dAr + i); //dAr[0] i=0 ����, �迭�� ������ 0���� ����
	}

	//���� �迭�� �����ּ�, �迭�� ĭ ��, �ִ밪�� ���� ������ �ּ�, �ּҰ��� ���� ������ �ּ�
	getMaxAndMin(dAr, size, &max, &min);
	
	printf("�ִ밪:  %d\n", max);
	printf("�ּҰ�:  %d\n", min);

}

void getMaxAndMin(int* dAr,int size, int* max, int* min) {
	//�ܺο��� ���� ���� �ִ�,�ּҰ� ������ �ּҸ� ���� �����Ͽ� 0��° ���� �־��ش�
	*max = dAr[0];
	*min = dAr[0];

	for (int i = 0; i < size; i++) {
		if (*max < dAr[i]) { *max = dAr[i]; }
		if (*min > dAr[i]) { *min = dAr[i]; }
	}
	//�Լ� ����� ���޹��� max,min �ּҴ� �̹� �ִ밪�� �ּҰ����� ����Ǿ� �ִ�\
	//return �� �ʿ䰡 ����
}