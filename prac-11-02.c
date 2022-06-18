#include <stdio.h>

void main() {
	int i;
	int sum = 0;

	int arr[8] = { 1,2,3,4,5,6,7,8 };
	int* ptr = &arr[7]; //마지막 값

	for (i = 7; i >= 0; i--) {
		if (*(ptr-i) % 2 != 0) {
			sum += *(ptr-i);
		}
	}
		printf("배열 요소 중 홀수의 총 합은 : %d\n", sum);



}