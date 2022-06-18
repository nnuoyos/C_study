#include <stdio.h>

void main() {

	int N = 0;
	int num, sum = 0;

	printf("정수를 입력하세요: ");
	scanf_s("%d", &N);

	while (num <= N )
	{
		sum = sum + num;
		num++; 
	}

	printf("1~%d까지의 합은 %d 입니다.",sum);

}