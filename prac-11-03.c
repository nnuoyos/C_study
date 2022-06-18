#include <stdio.h>

void main() {
	int i;
	int arr[8] = { 1,2,3,4,5,6,7,8 };
	int* ptrStart = &arr[0];
	int* ptrEnd = &arr[7];

	for (i = 0; i < 8; i++) {
		printf("%d ", *(ptrStart+i));
	}
	printf("\n");

	for (i = 7; i >= 0; i--) {
		printf("%d ", *(ptrEnd-i));
	}


}