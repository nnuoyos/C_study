#include <stdio.h>

void main() {

	int N = 0;
	int num, sum = 0;

	printf("������ �Է��ϼ���: ");
	scanf_s("%d", &N);

	while (num <= N )
	{
		sum = sum + num;
		num++; 
	}

	printf("1~%d������ ���� %d �Դϴ�.",sum);

}