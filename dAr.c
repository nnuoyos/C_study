#include <stdio.h>
#include <stdlib.h>
//2차원배열 동적할당
void main() {

	int arr[3][5];
	int x = 1;
	int row, col;
	int** dbptr; //이중 포인터를 생성하여 2차원 배열 생성하기

	printf("행: ");
	scanf_s("%d", &row);
	printf("열: ");
	scanf_s("%d", &col);

	dbptr = (int**)malloc(sizeof(int*) * row); 

	for (int i = 0; i < row; i++) {
		dbptr[i] = (int*)malloc(sizeof(int) * col);
		//dbptr의 i번째 방에 크기 할당하기 (정수형 변수 col만큼 곱하기)
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