#include <stdio.h>

void main() {


	//100~200 까지 중 3, 7의 배수만 출력 (3,7 공통배수는 한 번만 출력)
	int n;
	printf("정수를 입력해주세요: ");
	scanf_s("%d ", &n);

	for (int i = 102; i < 200; i += 3)
	{
		printf("%d", i);

	}

}