#include <stdio.h>
#include <stdlib.h>

//함수 정의
void getMaxAndMin(int*, int, int*, int*);

void main() {
	int size = 0;
	int max = 0, min = 0;
	int* dAr = 0;

	printf("정수의 개수: ");
	scanf_s("%d", &size);

	//사용자에게 입력 받은 개수만큼 동적 배열의 칸을 할당한다
	dAr = (int*)calloc(size, sizeof(int));

	for (int i = 0; i < size; i++) {
		printf("%d 번째 정수: ", i + 1); //i=0부터 시작하므로, +1 로 1번째를 만들어준다
		scanf_s("%d", dAr + i); //dAr[0] i=0 부터, 배열의 시작은 0부터 시작
	}

	//동적 배열의 사작주소, 배열의 칸 수, 최대값을 담을 변수의 주소, 최소값을 담을 변수의 주소
	getMaxAndMin(dAr, size, &max, &min);
	
	printf("최대값:  %d\n", max);
	printf("최소값:  %d\n", min);

}

void getMaxAndMin(int* dAr,int size, int* max, int* min) {
	//외부에서 전달 받은 최대,최소값 변수의 주소를 직접 접근하여 0번째 값을 넣어준다
	*max = dAr[0];
	*min = dAr[0];

	for (int i = 0; i < size; i++) {
		if (*max < dAr[i]) { *max = dAr[i]; }
		if (*min > dAr[i]) { *min = dAr[i]; }
	}
	//함수 종료시 전달받은 max,min 주소는 이미 최대값과 최소값으로 변경되어 있다\
	//return 할 필요가 없다
}