#include <stdio.h>
#include <stdlib.h>

void main() {
	int* dAr = 0;

	dAr = (int*)calloc(5, sizeof(int));//초기화 함->바이트를 전부 0으로 초기화
	dAr = (int*)realloc(dAr, sizeof(int) * 8); //realloc->사이즈를 8로 변경

	
	for (int i = 0; i < 8; i++) {
		dAr[i] = i + 1;
		printf("%d\n", dAr[i]);
	}


	free(dAr); //동적 배열 해제



}