#include <stdio.h>

void main() {
	int i;
	int sum = 0;

	int arr[8] = { 1,2,3,4,5,6,7,8 };
	int* ptr = &arr[7]; //������ ��

	for (i = 7; i >= 0; i--) {
		if (*(ptr-i) % 2 != 0) {
			sum += *(ptr-i);
		}
	}
		printf("�迭 ��� �� Ȧ���� �� ���� : %d\n", sum);



}