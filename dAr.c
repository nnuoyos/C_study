#include <stdio.h>
#include <stdlib.h>
//2�����迭 �����Ҵ�
void main() {

	int arr[3][5];
	int x = 1;
	int row, col;
	int** dbptr; //���� �����͸� �����Ͽ� 2���� �迭 �����ϱ�

	printf("��: ");
	scanf_s("%d", &row);
	printf("��: ");
	scanf_s("%d", &col);

	dbptr = (int**)malloc(sizeof(int*) * row); 

	for (int i = 0; i < row; i++) {
		dbptr[i] = (int*)malloc(sizeof(int) * col);
		//dbptr�� i��° �濡 ũ�� �Ҵ��ϱ� (������ ���� col��ŭ ���ϱ�)
	}
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			dbptr[i][j] = x++;
		}
	}

	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			printf("%d ", dbptr[i][j]);
		}
		printf("\n");
	}


	for (int i = 0; i < row; i++) {
		free(dbptr[i]);
	}
	free(dbptr);

}